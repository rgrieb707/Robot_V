/*******************************************************************************
   IDENTIFICATION

   Workfile: serialport.h

   Project: ESM411

   ID:

   Revision: 1.0

********************************************************************************
* Third Party License and Rights (If included on media.):
*
* All Trademarks are the properties of their respective owners. 3rd party
* license & rights are subject to the terms contained on this media.
*
********************************************************************************

Distribution authorized to the Department of Defense and U.S. DoD contractors
only; Administrative or Operational Use, 19 May 09; other request shall be
referred to:

Ground Maneuver Product Manager
SFAE-AV-UAS-GM
PEO Aviation
Redstone Arsenal, AL 35898-7459

Copyright 2015 AAI Corporation

WARNING
This document contains technical data whose export is restricted by the Arms
Export Control Act (Title 22, U.S.C., Sec 2751, et seq.) or the Export
Administration Act of 1979 (Title 50, U.S.C., App. 2401 et seq.), as amended.
Violations of these export laws are subject to severe criminal penalties.
Disseminate in accordance with provisions of DoD Directive 5230.25.

DESTRUCTION NOTICE
For classified documents, follow the procedures in DoD 5220.22-M.Industrial
Security Manual, Section 11-19 or DoD 5200.1-R Information Security Program
Regulation, Chapter IX.  For unclassified, limited documents, destroy by any
method that will prevent disclosure of contents or reconstruction of the
document.

********************************************************************************
   DESCRIPTION

   Header file to a SerialPort class to share all common operations for objects
   sending and receiving data through a serial port.

********************************************************************************
   REVISION HISTORY

    Revision 1.0 (INCORPORATED)
      Created:  23-APR-2015       MHENKEL
        Created and completed for ESM411: CRIB-VoIP
*******************************************************************************/
#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QObject>
#include <QDebug>
#include <QThread>
//#include <unistd.h>

//#include <QtSerialPort/QSerialPort>
//#include <QtSerialPort/QSerialPortInfo>


///**
// * @brief The SerialPort class to handle all connecting/reading/writing over serial
// * designed to be inheritaed and expanded upon(Radio, ACE).
// */
//class SerialPort :  public QObject
//{
//    Q_OBJECT
//public:

//    /**
//     * @brief SerialPort: the constructor of the class
//     */
//    explicit SerialPort();

//    /**
//     * @brief ~SerialPort: the destructor of the class
//     */
//    virtual ~SerialPort();

//    /**
//     * @brief openConnection: creates nd opens a Read-Write connection with the class
//     * @return true if connection was opened, false it failed to open a connection
//     */
//    virtual bool openConnection();

//    /**
//     * @brief sendmessageOverSerial:takes in a message and sends it across the set serial port
//     * @param message - the message requested to send
//     */
//    virtual void sendmessageOverSerial(QByteArray message) const;

//    QSerialPort* serialCon;//the QSerialPort lib object for handling the sending and receiving data over serial

//    /** @brief startListener-starts the response listener*/
//    virtual void startListener() = 0;

//protected:
//    QString portName;       //the name of the serial port being communicated with
//    int baudRate;           //the baud rate of the message going accross the serial connection
//    QThread listenerThread;//the seperate thread the listener runs on

//signals:

//public slots:

//    /**
//     * @brief configureSerialPort: retrieves the port name and baud rate for
//     *      the serial connection
//     * @param ser - an object holding the configuration properties
//     * @return returns false if ser == NULL, otherwise returns true
//     */
//   // virtual bool configureSerialPort(const SerialConfiguration* ser) = 0;

//};

#endif // SERIALPORT_H


