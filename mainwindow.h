#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QtSerialPort/QSerialPort>
//#include <QtNetwork/QAbstractSocket>
#include <QUdpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_textEdit_textChanged();

  //  void on_checkBox_clicked(bool checked);
    void timeout();

   // void on_checkBox_clicked();

    void rx_serial_data();
    void rx_udp_data();

private: //data
    Ui::MainWindow *ui;
       QTimer* mytimer;
       QSerialPort* myPort1;
       QSerialPort* myPort2;
       QUdpSocket* myReadSocket;
       QUdpSocket* mySendSocket;
       QHostAddress groupAddress;


};
#endif // MAINWINDOW_H
