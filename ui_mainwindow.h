/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QCheckBox *checkBox;
    QTextEdit *Battery1;
    QTextEdit *Serial_2_Read;
    QLabel *label;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QToolButton *toolButton_5;
    QCheckBox *checkBox_4;
    QTextEdit *textEdit_2;
    QLabel *label_2;
    QTextEdit *Battery2;
    QTextEdit *S_RANGE_FWD;
    QTextEdit *S_RANGE_Back;
    QTextEdit *IR_RANGE_FWD;
    QTextEdit *IR_RANGE_BACK;
    QTextEdit *TEMPERATURE;
    QTextEdit *HUMIDITY;
    QTextEdit *HEADING;
    QTextEdit *COLLISION_1;
    QTextEdit *COLLISION_2;
    QTextEdit *COLLISION_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QTextEdit *Serial_1_Read;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(978, 596);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 10, 93, 28));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(33, 20, 51, 31));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 90, 81, 21));
        Battery1 = new QTextEdit(centralWidget);
        Battery1->setObjectName(QStringLiteral("Battery1"));
        Battery1->setGeometry(QRect(320, 50, 71, 31));
        Serial_2_Read = new QTextEdit(centralWidget);
        Serial_2_Read->setObjectName(QStringLiteral("Serial_2_Read"));
        Serial_2_Read->setGeometry(QRect(170, 20, 61, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 60, 101, 20));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 110, 81, 21));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(10, 130, 81, 21));
        toolButton = new QToolButton(centralWidget);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(90, 200, 61, 21));
        toolButton_2 = new QToolButton(centralWidget);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(20, 230, 61, 19));
        toolButton_3 = new QToolButton(centralWidget);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(160, 230, 61, 19));
        toolButton_4 = new QToolButton(centralWidget);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(90, 260, 61, 19));
        toolButton_5 = new QToolButton(centralWidget);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(90, 230, 61, 19));
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(10, 260, 70, 17));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 280, 71, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 310, 51, 20));
        Battery2 = new QTextEdit(centralWidget);
        Battery2->setObjectName(QStringLiteral("Battery2"));
        Battery2->setGeometry(QRect(320, 90, 71, 31));
        S_RANGE_FWD = new QTextEdit(centralWidget);
        S_RANGE_FWD->setObjectName(QStringLiteral("S_RANGE_FWD"));
        S_RANGE_FWD->setGeometry(QRect(320, 130, 71, 31));
        S_RANGE_Back = new QTextEdit(centralWidget);
        S_RANGE_Back->setObjectName(QStringLiteral("S_RANGE_Back"));
        S_RANGE_Back->setGeometry(QRect(320, 170, 71, 31));
        IR_RANGE_FWD = new QTextEdit(centralWidget);
        IR_RANGE_FWD->setObjectName(QStringLiteral("IR_RANGE_FWD"));
        IR_RANGE_FWD->setGeometry(QRect(320, 210, 71, 31));
        IR_RANGE_BACK = new QTextEdit(centralWidget);
        IR_RANGE_BACK->setObjectName(QStringLiteral("IR_RANGE_BACK"));
        IR_RANGE_BACK->setGeometry(QRect(320, 250, 71, 31));
        TEMPERATURE = new QTextEdit(centralWidget);
        TEMPERATURE->setObjectName(QStringLiteral("TEMPERATURE"));
        TEMPERATURE->setGeometry(QRect(320, 290, 71, 31));
        HUMIDITY = new QTextEdit(centralWidget);
        HUMIDITY->setObjectName(QStringLiteral("HUMIDITY"));
        HUMIDITY->setGeometry(QRect(320, 330, 71, 31));
        HEADING = new QTextEdit(centralWidget);
        HEADING->setObjectName(QStringLiteral("HEADING"));
        HEADING->setGeometry(QRect(480, 50, 71, 31));
        COLLISION_1 = new QTextEdit(centralWidget);
        COLLISION_1->setObjectName(QStringLiteral("COLLISION_1"));
        COLLISION_1->setGeometry(QRect(480, 90, 71, 31));
        COLLISION_2 = new QTextEdit(centralWidget);
        COLLISION_2->setObjectName(QStringLiteral("COLLISION_2"));
        COLLISION_2->setGeometry(QRect(480, 130, 71, 31));
        COLLISION_3 = new QTextEdit(centralWidget);
        COLLISION_3->setObjectName(QStringLiteral("COLLISION_3"));
        COLLISION_3->setGeometry(QRect(480, 170, 71, 31));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 60, 61, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 100, 61, 20));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 140, 61, 20));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 170, 61, 31));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(250, 210, 71, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(250, 250, 71, 31));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(240, 290, 71, 31));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(250, 340, 71, 31));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(410, 60, 61, 20));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(410, 100, 61, 20));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(410, 140, 61, 20));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(410, 180, 61, 21));
        Serial_1_Read = new QTextEdit(centralWidget);
        Serial_1_Read->setObjectName(QStringLiteral("Serial_1_Read"));
        Serial_1_Read->setGeometry(QRect(100, 20, 61, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 978, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Center Head", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Lights", 0));
        label->setText(QApplication::translate("MainWindow", "Serial Tranfer Count", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Strobe", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "Laser", 0));
        toolButton->setText(QApplication::translate("MainWindow", "FWD", 0));
        toolButton_2->setText(QApplication::translate("MainWindow", "LEFT", 0));
        toolButton_3->setText(QApplication::translate("MainWindow", "RIGHT", 0));
        toolButton_4->setText(QApplication::translate("MainWindow", "REVERSE", 0));
        toolButton_5->setText(QApplication::translate("MainWindow", "STOP", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "SPIN", 0));
        label_2->setText(QApplication::translate("MainWindow", "DISTANCE", 0));
        label_3->setText(QApplication::translate("MainWindow", "BATTERY 1", 0));
        label_4->setText(QApplication::translate("MainWindow", "BATTERY 2", 0));
        label_5->setText(QApplication::translate("MainWindow", "Range FWD", 0));
        label_6->setText(QApplication::translate("MainWindow", "Range REV", 0));
        label_7->setText(QApplication::translate("MainWindow", "IR Range FWD", 0));
        label_8->setText(QApplication::translate("MainWindow", "IR RangeREV", 0));
        label_9->setText(QApplication::translate("MainWindow", "TEMPERATURE", 0));
        label_10->setText(QApplication::translate("MainWindow", "HUMIDITY", 0));
        label_11->setText(QApplication::translate("MainWindow", "HEADING", 0));
        label_12->setText(QApplication::translate("MainWindow", "Collision 1", 0));
        label_13->setText(QApplication::translate("MainWindow", "Collision 2", 0));
        label_14->setText(QApplication::translate("MainWindow", "Collision3", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
