/*******************************************************************************
   IDENTIFICATION

   Workfile: serialport.cpp

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

   Source file for implementing all function of the serialPort class outlined
   in the header file to share all common operations for objects
   sending and receiving data through a serial port.

********************************************************************************
   REVISION HISTORY

    Revision 1.0 (INCORPORATED)
      Created:  23-APR-2015       MHENKEL
        Created and completed for ESM411: CRIB-VoIP
*******************************************************************************/
#include "serialport.h"
#include <sstream>
#include <QMessageBox>
/**
 * @brief SerialPort: the constructor of the class
 */
SerialPort::SerialPort() :
    serialCon(NULL),
    portName(""),
    baudRate(0),
    listenerThread(NULL)
{
}

/**
 * @brief ~SerialPort: the destructor of the class
 */
SerialPort::~SerialPort(){
    if(serialCon != NULL){
        serialCon->close();
        delete serialCon;
    }
    listenerThread.exit();
}

/**
 * @brief openConnection: creates nd opens a Read-Write connection with the class
 * @return true if connection was opened, false it failed to open a connection
 */


bool SerialPort::openConnection(){
    if(serialCon == NULL)
        serialCon = new QSerialPort(portName,this);

    serialCon->setBaudRate(baudRate);
    //open connection to serial port
    if(serialCon->open(QIODevice::ReadWrite)){
        startListener();
        return true;
    } else {

       // QMessageBox::critical(this, tr("Critical Error"));
       //  closeSerialPort();

        return false;
    }
}


/**
 * @brief sendmessageOverSerial:takes in a message and sends it across the set serial port
 * @param message - the message requested to send
**/

void SerialPort::sendmessageOverSerial(QByteArray message) const{
    //send passed in message
    serialCon->write(message);
    serialCon->flush();
}



