/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QPushButton *searchButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton;
    QPushButton *folderButton;
    QPushButton *downloadButton;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        MainWindow->setMinimumSize(QSize(280, 240));
        MainWindow->setMaximumSize(QSize(640, 480));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/img/mainIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        MainWindow->setTabShape(QTabWidget::Rounded);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(280, 240));
        centralWidget->setMaximumSize(QSize(640, 480));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 641, 451));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(8, 8, 8, 8);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        nameEdit = new QLineEdit(verticalLayoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        horizontalLayout->addWidget(nameEdit);

        searchButton = new QPushButton(verticalLayoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon1);

        horizontalLayout->addWidget(searchButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(verticalLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_2 = new QComboBox(verticalLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton = new QRadioButton(verticalLayoutWidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_4->addWidget(radioButton);

        folderButton = new QPushButton(verticalLayoutWidget);
        folderButton->setObjectName(QString::fromUtf8("folderButton"));

        horizontalLayout_4->addWidget(folderButton);


        verticalLayout->addLayout(horizontalLayout_4);

        downloadButton = new QPushButton(verticalLayoutWidget);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/img/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        downloadButton->setIcon(icon2);

        verticalLayout->addWidget(downloadButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 29));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TuSubtitulo downloader", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Show:", 0, QApplication::UnicodeUTF8));
        searchButton->setText(QApplication::translate("MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Season", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Episode", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "Down&load all", 0, QApplication::UnicodeUTF8));
        folderButton->setText(QApplication::translate("MainWindow", "Select folder", 0, QApplication::UnicodeUTF8));
        downloadButton->setText(QApplication::translate("MainWindow", "Download", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
