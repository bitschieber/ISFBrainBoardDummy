#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QCloseEvent>
#include "network/tcpservercontroller.h"
#include <QGraphicsScene>
#include "isfdata.h"

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
    void on_pushButtonStartServer_clicked();
    void ImageReceived(QByteArray data);
    void DataReceived(QByteArray data);

    void on_pushButtonReset_clicked();

    void on_horizontalSliderSpeed_valueChanged(int value);

    void on_horizontalSliderSteeringAngle_valueChanged(int value);

private:
    void closeEvent (QCloseEvent *event);
    void init();
    DATA_SET_BRAIN_BOARD_UC_t testParameter01(DATA_SET_BRAIN_BOARD_UC_t current);
    DATA_SET_BRAIN_BOARD_UC_t testParameter02(void);
    DATA_SET_BRAIN_BOARD_UC_t parameterFromImage(QImage image);

    Ui::MainWindow *ui;
    TCPServerController* _tcpServerImage;
    TCPServerController* _tcpServerData;
    QImage _simulationViewImage;
    QGraphicsScene _simulationViewScene;
    int _stepCounter = 0;
    DATA_SET_BRAIN_BOARD_UC_t _dataToUc;
    bool steeringTurnLeft = false;
};

#endif // MAINWINDOW_H
