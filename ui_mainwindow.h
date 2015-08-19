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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditIP;
    QLineEdit *lineEditPort;
    QPushButton *pushButtonStartServer;
    QGraphicsView *graphicsViewSimulationView;
    QLabel *label_3;
    QLabel *labelStepCounter;
    QPushButton *pushButtonReset;
    QSlider *horizontalSliderSpeed;
    QLabel *label_4;
    QSlider *horizontalSliderSteeringAngle;
    QLabel *label_5;
    QLabel *labelSliderSpeed;
    QLabel *labelSliderSteeringAngle;
    QLabel *label_6;
    QLabel *labelUcSpeed;
    QLabel *label_7;
    QLabel *labelUcSpeedPWM;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *labelUcSteeringPWM;
    QLabel *labelUcSteering;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 486);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 47, 13));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 47, 13));
        lineEditIP = new QLineEdit(centralWidget);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));
        lineEditIP->setGeometry(QRect(50, 15, 113, 20));
        lineEditPort = new QLineEdit(centralWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));
        lineEditPort->setGeometry(QRect(50, 45, 113, 20));
        pushButtonStartServer = new QPushButton(centralWidget);
        pushButtonStartServer->setObjectName(QStringLiteral("pushButtonStartServer"));
        pushButtonStartServer->setGeometry(QRect(170, 45, 75, 23));
        graphicsViewSimulationView = new QGraphicsView(centralWidget);
        graphicsViewSimulationView->setObjectName(QStringLiteral("graphicsViewSimulationView"));
        graphicsViewSimulationView->setGeometry(QRect(20, 100, 391, 281));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(270, 20, 47, 13));
        labelStepCounter = new QLabel(centralWidget);
        labelStepCounter->setObjectName(QStringLiteral("labelStepCounter"));
        labelStepCounter->setGeometry(QRect(310, 20, 71, 16));
        labelStepCounter->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pushButtonReset = new QPushButton(centralWidget);
        pushButtonReset->setObjectName(QStringLiteral("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(170, 70, 75, 23));
        horizontalSliderSpeed = new QSlider(centralWidget);
        horizontalSliderSpeed->setObjectName(QStringLiteral("horizontalSliderSpeed"));
        horizontalSliderSpeed->setGeometry(QRect(430, 50, 160, 22));
        horizontalSliderSpeed->setMinimum(-4000);
        horizontalSliderSpeed->setMaximum(4000);
        horizontalSliderSpeed->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 30, 71, 16));
        horizontalSliderSteeringAngle = new QSlider(centralWidget);
        horizontalSliderSteeringAngle->setObjectName(QStringLiteral("horizontalSliderSteeringAngle"));
        horizontalSliderSteeringAngle->setGeometry(QRect(430, 110, 160, 22));
        horizontalSliderSteeringAngle->setMinimum(-20);
        horizontalSliderSteeringAngle->setMaximum(20);
        horizontalSliderSteeringAngle->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(430, 90, 101, 16));
        labelSliderSpeed = new QLabel(centralWidget);
        labelSliderSpeed->setObjectName(QStringLiteral("labelSliderSpeed"));
        labelSliderSpeed->setGeometry(QRect(540, 30, 61, 20));
        labelSliderSpeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelSliderSteeringAngle = new QLabel(centralWidget);
        labelSliderSteeringAngle->setObjectName(QStringLiteral("labelSliderSteeringAngle"));
        labelSliderSteeringAngle->setGeometry(QRect(540, 90, 61, 20));
        labelSliderSteeringAngle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(440, 180, 101, 16));
        labelUcSpeed = new QLabel(centralWidget);
        labelUcSpeed->setObjectName(QStringLiteral("labelUcSpeed"));
        labelUcSpeed->setGeometry(QRect(560, 180, 101, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(440, 200, 101, 16));
        labelUcSpeedPWM = new QLabel(centralWidget);
        labelUcSpeedPWM->setObjectName(QStringLiteral("labelUcSpeedPWM"));
        labelUcSpeedPWM->setGeometry(QRect(560, 200, 101, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(440, 250, 101, 16));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(440, 230, 101, 16));
        labelUcSteeringPWM = new QLabel(centralWidget);
        labelUcSteeringPWM->setObjectName(QStringLiteral("labelUcSteeringPWM"));
        labelUcSteeringPWM->setGeometry(QRect(560, 250, 101, 16));
        labelUcSteering = new QLabel(centralWidget);
        labelUcSteering->setObjectName(QStringLiteral("labelUcSteering"));
        labelUcSteering->setGeometry(QRect(560, 230, 101, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 21));
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
        label->setText(QApplication::translate("MainWindow", "IP:", 0));
        label_2->setText(QApplication::translate("MainWindow", "Port:", 0));
        lineEditIP->setText(QApplication::translate("MainWindow", "127.0.0.1", 0));
        lineEditPort->setText(QApplication::translate("MainWindow", "4646", 0));
        pushButtonStartServer->setText(QApplication::translate("MainWindow", "StartServer", 0));
        label_3->setText(QApplication::translate("MainWindow", "Steps:", 0));
        labelStepCounter->setText(QApplication::translate("MainWindow", "undefined", 0));
        pushButtonReset->setText(QApplication::translate("MainWindow", "Reset", 0));
        label_4->setText(QApplication::translate("MainWindow", "Speed (mm/s):", 0));
        label_5->setText(QApplication::translate("MainWindow", "SteeringAngle (deg):", 0));
        labelSliderSpeed->setText(QApplication::translate("MainWindow", "undefined", 0));
        labelSliderSteeringAngle->setText(QApplication::translate("MainWindow", "undefined", 0));
        label_6->setText(QApplication::translate("MainWindow", "uc Speed (mm/s):", 0));
        labelUcSpeed->setText(QApplication::translate("MainWindow", "undefined", 0));
        label_7->setText(QApplication::translate("MainWindow", "uc Speed (PWM):", 0));
        labelUcSpeedPWM->setText(QApplication::translate("MainWindow", "undefined", 0));
        label_8->setText(QApplication::translate("MainWindow", "uc Steering (PWM):", 0));
        label_9->setText(QApplication::translate("MainWindow", "uc Steering (deg):", 0));
        labelUcSteeringPWM->setText(QApplication::translate("MainWindow", "undefined", 0));
        labelUcSteering->setText(QApplication::translate("MainWindow", "undefined", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
