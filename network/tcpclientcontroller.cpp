#include "tcpclientcontroller.h"

TCPClientController::TCPClientController(QObject *parent,QString ip, quint16 port) : QObject(parent)
{
    //image = 0;
    QByteArray data; // <-- fill with data

    _pSocket = new QTcpSocket( this ); // <-- needs to be a member variable: QTcpSocket * _pSocket;
    //connect(_pSocket, SIGNAL(readyRead()),this, SLOT(readyRead()));
    connect( _pSocket, SIGNAL(readyRead()), SLOT(readTcpData()) );


    _pSocket->connectToHost(ip, port);
    if( _pSocket->waitForConnected() ) {
        //_pSocket->write( data );
    }
}

void TCPClientController::readyRead()
{
    QByteArray data = _pSocket->readAll();
}

void TCPClientController::sendData(QByteArray data)
{
    int result = _pSocket->write(data,data.length());
    if(result==-1)
    {
        //Error
    }
}

void TCPClientController::readTcpData()
{
    QByteArray d = _pSocket->readAll();
    emit valueChanged(d);
    /*
    DATA_SET_BRAIN_BOARD_UC_t temp;

    memcpy(&temp,d,sizeof(DATA_SET_BRAIN_BOARD_UC_t));

    if(temp.speed_mms == 0){
        averageCounter++;
    }
    else{
        data.speed_mms = temp.speed_mms;
        averageCounter = 0;
    }

    data.steering_angle = temp.steering_angle;

    if(averageCounter>=3){
        data.speed_mms = temp.speed_mms;
        averageCounter = 0;
    }
    */
    //image = QImage::fromData(data,"JPEG");//the second param is format name
}

/*
QImage TCPClientController::getImage(){
    return image;
}
*/

