#ifndef TCPSERVERCONTROLLER_H
#define TCPSERVERCONTROLLER_H

#include <QObject>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
//#include "isfdata.h"
#include <cstdint>

class TCPServerController : public QObject
{
    Q_OBJECT
public:
    explicit TCPServerController(QObject *parent = 0, QString ip = "127.0.0.1", quint16 port = 8080);
    void sendData(QByteArray data,int len);
    //DATA_SET_MONITOR_t dataSetInput;
    //DATA_SET_MONITOR_t dataSetOutput;
    
signals:
    void dataReceived(QByteArray data);
    
public slots:
    void newConnection();
    void readyRead();

private:
    QTcpServer *server = 0;
    QTcpSocket *socket;
    //char _outbutBuffer[sizeof(DATA_SET_BRAIN_BOARD_UC_t)];
    //char _outbutBuffer[sizeof(DATA_SET_MONITOR_t)];
    //QByteArray _inputData;
    
};

#endif // TCPSERVERCONTROLLER_H
