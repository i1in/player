/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *volume_title;
    QSlider *volume;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *prevBtn;
    QPushButton *playBtn;
    QPushButton *forwardBtn;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *music_duration;
    QSlider *duration_slider;
    QLabel *music_ends;
    QLabel *volumeLevel;
    QLabel *music;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(540, 330);
        MainWindow->setMinimumSize(QSize(540, 132));
        MainWindow->setMaximumSize(QSize(540, 330));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background: #121212;\n"
"}\n"
"\n"
"QLabel {\n"
"	color: #fff\n"
"}"));
        action = new QAction(MainWindow);
        action->setObjectName("action");
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("text-html")));
        action->setIcon(icon);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName("action_2");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setContextMenuPolicy(Qt::NoContextMenu);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 240, 541, 71));
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"	background: #080808;\n"
"	border-top: 1px solid #242424;\n"
"	border-radius: 10px 10px 0px 0px\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayoutWidget = new QWidget(frame);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(370, 0, 171, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        volume_title = new QLabel(horizontalLayoutWidget);
        volume_title->setObjectName("volume_title");

        horizontalLayout->addWidget(volume_title);

        volume = new QSlider(horizontalLayoutWidget);
        volume->setObjectName("volume");
        volume->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(volume);

        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(200, 0, 171, 71));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        prevBtn = new QPushButton(horizontalLayoutWidget_2);
        prevBtn->setObjectName("prevBtn");
        prevBtn->setMaximumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(prevBtn);

        playBtn = new QPushButton(horizontalLayoutWidget_2);
        playBtn->setObjectName("playBtn");
        playBtn->setMaximumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(playBtn);

        forwardBtn = new QPushButton(horizontalLayoutWidget_2);
        forwardBtn->setObjectName("forwardBtn");
        forwardBtn->setMaximumSize(QSize(35, 35));

        horizontalLayout_2->addWidget(forwardBtn);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(-1, 0, 201, 71));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(4, 0, 4, 0);
        music_duration = new QLabel(horizontalLayoutWidget_3);
        music_duration->setObjectName("music_duration");

        horizontalLayout_3->addWidget(music_duration);

        duration_slider = new QSlider(horizontalLayoutWidget_3);
        duration_slider->setObjectName("duration_slider");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(duration_slider->sizePolicy().hasHeightForWidth());
        duration_slider->setSizePolicy(sizePolicy);
        duration_slider->setMinimumSize(QSize(50, 0));
        duration_slider->setMaximumSize(QSize(130, 16777215));
        duration_slider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(duration_slider);

        music_ends = new QLabel(horizontalLayoutWidget_3);
        music_ends->setObjectName("music_ends");

        horizontalLayout_3->addWidget(music_ends);

        volumeLevel = new QLabel(frame);
        volumeLevel->setObjectName("volumeLevel");
        volumeLevel->setGeometry(QRect(398, 39, 91, 31));
        music = new QLabel(centralwidget);
        music->setObjectName("music");
        music->setGeometry(QRect(150, 200, 391, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Roboto")});
        font.setPointSize(12);
        music->setFont(font);
        music->setLayoutDirection(Qt::LeftToRight);
        music->setTextFormat(Qt::MarkdownText);
        music->setAlignment(Qt::AlignCenter);
        music->setMargin(0);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 200, 151, 41));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 540, 21));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\320\273\320\265\320\265\321\200", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\220\321\203\320\264\320\270\320\276\321\204\320\260\320\271\320\273", nullptr));
        action_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264\320\265\320\276\321\204\320\260\320\271\320\273", nullptr));
        volume_title->setText(QString());
        prevBtn->setText(QString());
        playBtn->setText(QString());
        forwardBtn->setText(QString());
        music_duration->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        music_ends->setText(QCoreApplication::translate("MainWindow", "00:00", nullptr));
        volumeLevel->setText(QString());
        music->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\271\321\207\320\260\321\201 \320\270\320\263\321\200\320\260\320\265\321\202:", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
