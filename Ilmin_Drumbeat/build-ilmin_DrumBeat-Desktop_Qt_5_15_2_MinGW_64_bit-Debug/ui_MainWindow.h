/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(682, 763);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background-image: url(:/files/resources/background.jpg);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 90, 161, 151));
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/files/resources/base.jfif);"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 90, 151, 151));
        pushButton_2->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/files/resources/hihat2.jfif);"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 300, 141, 151));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/files/resources/hihat1.jfif);"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 300, 151, 151));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/files/resources/snare.jfif);"));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(470, 300, 141, 151));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/files/resources/stick.jfif);"));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 590, 111, 91));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/files/resources/Record.png);"));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(390, 590, 101, 91));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/files/resources/stop.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 540, 301, 16));
        label_2->setStyleSheet(QString::fromUtf8("color : White;"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 260, 41, 16));
        label_3->setStyleSheet(QString::fromUtf8("color : White;"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 260, 31, 16));
        label_4->setStyleSheet(QString::fromUtf8("color : White;"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 470, 31, 16));
        label_5->setStyleSheet(QString::fromUtf8("color : White;"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 470, 31, 16));
        label_6->setStyleSheet(QString::fromUtf8("color : White;"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(530, 470, 31, 16));
        label_7->setStyleSheet(QString::fromUtf8("color : White;"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(220, 700, 31, 16));
        label_8->setStyleSheet(QString::fromUtf8("color : White;"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(430, 700, 31, 16));
        label_9->setAutoFillBackground(false);
        label_9->setStyleSheet(QString::fromUtf8("color : White;"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Beat 1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Beat 2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Beat 3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Beat 4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Beat 5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Record", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "It will be recorded through your Microphone", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "( W )", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "( E )", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "( A )", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "( S )", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "( D )", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "( K )", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "( L )", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
