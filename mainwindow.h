#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtCore/QtCore>
#include <QtWidgets>
#include <QVideoWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_action_triggered();

    void on_playBtn_clicked();

    void on_volume_valueChanged(int value);

    void positionChanged(qint64 position);

    void durationChanged(qint64 duration);

    void on_horizontalSlider_valueChanged(int value);

    void on_action_2_triggered();

private:
    void updateDuration(qint64 duration);

    Ui::MainWindow *ui;
    bool isMuted = false;
    bool stop = false;
    QMediaPlayer *Player;
    QAudioOutput *audioOutput;
    QVideoWidget *videoOutput;
    QFileInfo *fileInfo;
    qint64 Mduration;

};
#endif // MAINWINDOW_H
