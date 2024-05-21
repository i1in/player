#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMultimedia>
#include <QDateTime>
#include <QVBoxLayout>


bool currently = false;
QString title = "";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    Player = new QMediaPlayer();
    audioOutput = new QAudioOutput();
    videoOutput = new QVideoWidget();
    fileInfo = new QFileInfo();
    connect(Player, &QMediaPlayer::durationChanged, this, &MainWindow::durationChanged);
    connect(Player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);
    connect(audioOutput, &QAudioOutput::volumeChanged, this, &MainWindow::on_volume_valueChanged);
    ui->setupUi(this);

    ui->volume->setMinimum(1);
    ui->volume->setMaximum(10);
    ui->volume->setValue(1);
    audioOutput->setVolume(5);


    ui->playBtn->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
    ui->prevBtn->setIcon(style()->standardIcon(QStyle::SP_MediaSeekBackward));
    ui->forwardBtn->setIcon(style()->standardIcon(QStyle::SP_MediaSeekForward));


    ui ->duration_slider -> setRange(0, Player->duration() / 1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::durationChanged(qint64 duration) {
    Mduration = duration / 1000;
    ui->duration_slider->setMaximum(Mduration);
}

void MainWindow::on_action_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Выберите файл"), "", tr("MP3 Files (*.mp3)"));
    Player -> setSource(QUrl(FileName));
    Player -> setAudioOutput(audioOutput);
    Player->play();

    currently = true;
    QFileInfo FileInfo(FileName);
    title = FileInfo.fileName();
    ui->music->setText(FileInfo.fileName());
}


void MainWindow::on_playBtn_clicked()
{
    if (currently == false) {
        return;
    }

    if (stop == false) {
        Player -> pause();
        stop = true;
        ui->playBtn->setIcon(style()->standardIcon(QStyle::SP_MediaPause));
        ui->music->setText(title + "\n (пауза)");
    } else {
        Player -> play();
        stop = false;
        ui->playBtn->setIcon(style()->standardIcon(QStyle::SP_MediaPlay));
        ui->music->setText(title);
    }
}

void MainWindow::updateDuration(qint64 duration)
{
    QString timestr;
    if (duration || Mduration) {
        QTime CurrentTime((duration / 60) % 60, duration % 60, (duration * 1000) % 1000);
        QTime totalTime((Mduration / 60) % 60, Mduration % 60, (Mduration * 1000) % 1000);
        QString format = "ss:mm";
        if (Mduration > 600) {
            format = "ss:mm";
        }
        ui -> music_duration -> setText(CurrentTime.toString(format));
        ui -> music_ends -> setText(totalTime.toString(format));
    }
}

void MainWindow::positionChanged(qint64 position) {
    if (!ui->duration_slider ->isSliderDown()) {
        ui ->duration_slider -> setValue(position / 1000);
    }
    updateDuration(position / 1000);
}

void MainWindow::on_volume_valueChanged(int value)
{
    audioOutput->setVolume(ui->volume->value());
    Player -> setAudioOutput(audioOutput);
    ui->volumeLevel->setText(QString::fromStdString(std::to_string(audioOutput->volume())));
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    Player -> setPosition(value * 1000);
}


void MainWindow::on_action_2_triggered()
{
    QString FileName = QFileDialog::getOpenFileName(this, tr("Выберите файл"), "", tr("MP4, MKV (.mp4, *mkv)"));
    videoOutput->setGeometry(400, 400, 300, 400);
    videoOutput->show();

    Player -> setSource(QUrl(FileName));
    Player -> setVideoOutput(videoOutput);
    Player->play();

    currently = true;
    QFileInfo FileInfo(FileName);
    title = FileInfo.fileName();
    ui->music->setText(FileInfo.fileName());
}

