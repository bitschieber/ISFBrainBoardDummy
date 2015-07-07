#include "TCPServerController.h"

TCPServerController::TCPServerController(QObject *parent,QString ip, quint16 port) : QObject(parent){
//TCPServerController::TCPServerController(quint16 port){

    if(server!=0)
    {
        server->close();
        server->disconnect();
    }
    server = new QTcpServer(this);
    socket = 0;
    QHostAddress add;
    add.setAddress(ip);

    disconnect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));
    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!server->listen(add, port))
    //if(!server->listen(QHostAddress::Any, port))
    //if(!server->listen("192.168.178.80", 25000))
    {

        qDebug() << "Server could not start!";
        qDebug() << server->errorString();
    }
    else
    {
        qDebug() << "Server started!";
    }
}

void TCPServerController::newConnection()
{
    qDebug() << "New client connected!";
    socket = server->nextPendingConnection();
    connect(socket, SIGNAL(readyRead()),this, SLOT(readyRead()));

    //socket->write("hello client");
    //socket->flush();

    //socket->waitForBytesWritten(3000);

    //socket->close();
}

void TCPServerController::readyRead()
{
    QByteArray data = socket->readAll();
    emit dataReceived(data);

    /*
    //console->putData(data);
    for(int i = 0; i<data.count();i++){
        _inputData.append(data.at(i));
    }

    int i = sizeof(DATA_SET_MONITOR_t);

    if(_inputData.count()>=sizeof(DATA_SET_MONITOR_t)){
        //_inputBufferWritePos = _inputBufferWritePos-sizeof(DATA_SET_MONITOR_t);

        memcpy(&dataSetInput,_inputData.data(),sizeof(DATA_SET_MONITOR_t));

        //QString my_formatted_string = QString("Lenkwinkeln:%1, Speed:%2").arg(QString::number(dataSetInput.lenkwinkel),QString::number(dataSetInput.speed));
        _inputData.remove(0,sizeof(DATA_SET_MONITOR_t));


        //console->putData(my_formatted_string.toLocal8Bit());
    }
    */

    /*
    //qDebug() << "reading...";
    DATA_SET_MONITOR_t dataSet;
    // read the data from the socket
    int size = sizeof(DATA_SET_MONITOR_t);
    QByteArray data =  socket->readAll();
    if(data.count()>=sizeof(DATA_SET_MONITOR_t)){
        memcpy(&dataSet,data.data(),sizeof(DATA_SET_MONITOR_t));

        //memcpy(&data2,&dataSet,sizeof(DATA_SET_MONITOR_t));
    }
    */
}

void TCPServerController::sendData(QByteArray data,int len){
    if(socket!=0){
        //memcpy(_outbutBuffer,&data,data.length());
        socket->write(data,len);
    }
}
