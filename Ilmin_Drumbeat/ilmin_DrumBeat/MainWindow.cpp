#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    player = new QMediaPlayer(this);
    audioRecorder = new QAudioRecorder;
    audioProbe = new QAudioProbe(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    player->setMedia(QUrl("qrc:/files/resources/Bass-Drum-Hit-Level-6a-www.fesliyanstudios.com.mp3"));
    player->play();
    audioRecorder->audioInput();
}

void MainWindow::on_pushButton_2_clicked()
{
    player->setMedia(QUrl("qrc:/files/resources/Hi-Hat-Closed-Hit-A2-www.fesliyanstudios.com.mp3"));
    player->play();

}

void MainWindow::on_pushButton_3_clicked()
{
    player->setMedia(QUrl("qrc:/files/resources/Hi-Hat-Closed-Hit-C1-www.fesliyanstudios.com.mp3"));
    player->play();
}

void MainWindow::on_pushButton_4_clicked()
{
    player->setMedia(QUrl("qrc:/files/resources/Snare-Drum-Hit-Level-5b-www.fesliyanstudios.com.mp3"));
    player->play();
}

void MainWindow::on_pushButton_5_clicked()
{
    player->setMedia(QUrl("qrc:/files/resources/Drum-Sticks-Hit-C-www.fesliyanstudios.com.mp3"));
    player->play();
}

void MainWindow::on_pushButton_6_clicked()
{
    QAudioEncoderSettings audioSettings;
    audioSettings.setCodec("audio/amr");
    audioSettings.setQuality(QMultimedia::HighQuality);

    audioRecorder->setEncodingSettings(audioSettings);
    audioRecorder->setOutputLocation(QUrl::fromLocalFile("Ilmin_Beat"));

    audioRecorder->record();
}

void MainWindow::on_pushButton_7_clicked()
{
    audioRecorder->stop();
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch(event->key()){
        case Qt::Key_W:on_pushButton_clicked(); break;
        case Qt::Key_E:on_pushButton_2_clicked(); break;
        case Qt::Key_A:on_pushButton_3_clicked(); break;
        case Qt::Key_S:on_pushButton_4_clicked(); break;
        case Qt::Key_D:on_pushButton_5_clicked(); break;
        case Qt::Key_K:on_pushButton_6_clicked(); break;
        case Qt::Key_L:on_pushButton_7_clicked(); break;
    }
};
