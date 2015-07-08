#ifndef TCPCLIENTCONTROLLER_H
#define TCPCLIENTCONTROLLER_H

#include <QObject>
#include <QTcpSocket>
#include <QImage>
//#include "isfdata.h"


class TCPClientController : public QObject
{
    Q_OBJECT
public:
    explicit TCPClientController(QObject *parent = 0, QString ip = "127.0.0.1", quint16 port = 8080);
    void sendData(QByteArray data);
    //QImage getImage();
    //DATA_SET_BRAIN_BOARD_UC_t data;
    //int averageCounter;
signals:
    void valueChanged(QByteArray data);

public slots:
    void readTcpData();
    void readyRead();
private:
    QTcpSocket *_pSocket;
    //QImage image;
};

#endif // TCPCLIENTCONTROLLER_H
