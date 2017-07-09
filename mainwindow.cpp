#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

#include <QAction>
#include <QApplication>
#include <QDebug>
#include <QGridLayout>
#include <QMenu>
#include <QMenuBar>

QByteArray test_array[20];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);
     mytimer = new QTimer();

     myPort1 = new QSerialPort();
     myPort1->setPortName("COM1");
     myPort1->setBaudRate(QSerialPort::Baud9600);
     myPort1->setParity(QSerialPort::NoParity);
     myPort1->setFlowControl(QSerialPort::NoFlowControl);
     myPort1->setStopBits(QSerialPort::OneStop);
     myPort1->setDataBits(QSerialPort::Data8);

     if(myPort1 != NULL)
     {
        connect(myPort1,SIGNAL(readyRead()),this,SLOT(rx_serial_data()));
        myPort1->open(QSerialPort::ReadWrite);
     }
     else{
         QMessageBox::critical(NULL, "Serial Port 1 Error",
                               "Port 1 NOT Available:\n.", QMessageBox::Ok);
     }

     myPort2 = new QSerialPort();
     myPort2->setPortName("COM2");
     myPort2->setBaudRate(QSerialPort::Baud9600);
     myPort2->setParity(QSerialPort::NoParity);
     myPort2->setFlowControl(QSerialPort::NoFlowControl);
     myPort2->setStopBits(QSerialPort::OneStop);
     myPort2->setDataBits(QSerialPort::Data8);

     if(myPort2 != NULL)
     {
        connect(myPort2,SIGNAL(readyRead()),this,SLOT(rx_serial_data()));
        myPort2->open(QSerialPort::ReadWrite);
     }
     else{
         QMessageBox::critical(NULL, "Serial Port 2 Error",
                               "Port 2 NOT Available:\n.", QMessageBox::Ok);
     }


     mySendSocket = new QUdpSocket(this);
     myReadSocket = new QUdpSocket(this);

     myReadSocket->bind(6993, QUdpSocket::ShareAddress);
     //mySendSocket->setSocketOption(SO_BROADCAST_);
     groupAddress = QHostAddress("10.255.255.255");



}

void MainWindow::rx_serial_data()
{
    int bytes_ready = myPort1->bytesAvailable();
    if(bytes_ready >= 10){
        QByteArray myArray1 = myPort1->readAll();
        myPort1->write("Rusty's serial test com1...  .");
    }

    int bytes_ready2 = myPort2->bytesAvailable();
    if(bytes_ready2 >= 10){
        QByteArray myArray2 = myPort2->readAll();
        myPort2->write("Rusty's serial test com2 ...  .");
    }


}


void MainWindow::rx_udp_data()
{
    while (myReadSocket->hasPendingDatagrams()) {
    QByteArray datagram; datagram.resize(myReadSocket->pendingDatagramSize());
     myReadSocket->readDatagram(datagram.data(), datagram.size());

    }
}


MainWindow::~MainWindow()
{
    delete ui;
    delete mytimer;
    delete myPort1;
    delete myPort2;
}

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->setPlainText("Rusty is Good");
    mytimer->start(1000);
      connect(mytimer,SIGNAL(timeout()),this,SLOT(timeout()));
      myPort1->write("Rusty's serial test com1 ...  .");

      myPort2->write("Rusty's serial test com2 ...  .");


      QByteArray datagram = "BroadCast from Rusty to Mark the ACE King.. message " ;
      mySendSocket->writeDatagram(datagram.data(), datagram.size(), groupAddress, 6993);


}

void MainWindow::on_textEdit_textChanged()
{

}

//void MainWindow::on_checkBox_clicked(bool checked)
//{
//    int y = 0;
//}

void MainWindow::timeout(){
    static int clicker;
    ui->textEdit->setPlainText("Timer_Click  ..");
    QString txt;
    txt.sprintf("%d  seconds  ", clicker++);
     ui->textEdit->setPlainText(txt);
}


//void MainWindow::on_checkBox_clicked()
//{
//    //Do Something
//    int x = 0;
//}
