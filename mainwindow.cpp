#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->graphicsViewSimulationView->setScene(&_simulationViewScene);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    _dataToUc.speed_mms = 0;
    _dataToUc.steering_angle = 0;
    _stepCounter = 0;
    ui->labelSliderSpeed->setText(QString::number(ui->horizontalSliderSpeed->value()));
    ui->labelSliderSteeringAngle->setText(QString::number(ui->horizontalSliderSteeringAngle->value()));
    ui->labelStepCounter->setText(QString::number(_stepCounter));
}

void MainWindow::on_pushButtonStartServer_clicked()
{
    _tcpServer = new TCPServerController(this,ui->lineEditIP->text(),ui->lineEditPort->text().toUInt());
    connect(_tcpServer, SIGNAL(dataReceived(QByteArray)), this, SLOT(SimulationDataReceived(QByteArray)));

    ui->pushButtonStartServer->setText("Connected");
}

void MainWindow::SimulationDataReceived(QByteArray data)
{
    _stepCounter++;
    _simulationViewImage = QImage::fromData(data,"JPEG");//the second param is format name
    _simulationViewScene.addPixmap(QPixmap().fromImage(_simulationViewImage));
    ui->graphicsViewSimulationView->show();
    ui->labelStepCounter->setText(QString::number(_stepCounter));

    //_dataToUc = testParameter01(_dataToUc);
    _dataToUc = testParameter02();
    //_dataToUc = parameterFromImage(_simulationViewImage);

    char _outbutBuffer[sizeof(DATA_SET_BRAIN_BOARD_UC_t)];

    QByteArray sendData;

    sendData.resize(sizeof(DATA_SET_BRAIN_BOARD_UC_t));
    memcpy(_outbutBuffer,&_dataToUc,sizeof(DATA_SET_BRAIN_BOARD_UC_t));
    memcpy(sendData.data(),&_dataToUc,sizeof(DATA_SET_BRAIN_BOARD_UC_t));

    _tcpServer->sendData(sendData,sizeof(DATA_SET_BRAIN_BOARD_UC_t));
}


/*
 * Oszilierende Testparameter
 */
DATA_SET_BRAIN_BOARD_UC_t MainWindow::testParameter01(DATA_SET_BRAIN_BOARD_UC_t current)
{
    DATA_SET_BRAIN_BOARD_UC_t newParameter = current;
    if(newParameter.steering_angle>=20)
        steeringTurnLeft = true;
    else if(newParameter.steering_angle<=-20)
        steeringTurnLeft = false;

    if(steeringTurnLeft)
        newParameter.steering_angle --;
    else
        newParameter.steering_angle ++;

    newParameter.speed_mms = 1000;

    return newParameter;
}

/*
 * Slider Testparameter
 */
DATA_SET_BRAIN_BOARD_UC_t MainWindow::testParameter02(void)
{
    DATA_SET_BRAIN_BOARD_UC_t newParameter;

    newParameter.speed_mms = ui->horizontalSliderSpeed->value();
    newParameter.steering_angle = ui->horizontalSliderSteeringAngle->value();

    return newParameter;
}

/*
 * Parameter from Image-Calculation
 */
DATA_SET_BRAIN_BOARD_UC_t parameterFromImage(QImage image)
{
    DATA_SET_BRAIN_BOARD_UC_t newParameter;

    newParameter.speed_mms = 0;
    newParameter.steering_angle = 0;

    return newParameter;
}

void MainWindow::on_pushButtonReset_clicked()
{
    _tcpServer->disconnect();
    ui->pushButtonStartServer->setText("Disconnected");
    init();
}

void MainWindow::on_horizontalSliderSpeed_valueChanged(int value)
{
    ui->labelSliderSpeed->setText(QString::number(value));
}

void MainWindow::on_horizontalSliderSteeringAngle_valueChanged(int value)
{
    ui->labelSliderSteeringAngle->setText(QString::number(value));
}
