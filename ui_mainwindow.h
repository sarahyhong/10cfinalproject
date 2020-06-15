/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QCheckBox *tissue;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QCheckBox *electrode_chamber;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QCheckBox *tank;
    QWidget *widget3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QCheckBox *gel_casette;
    QLabel *label_8;
    QWidget *widget4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QCheckBox *lysate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(686, 354);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(91, 31, 123, 23));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(91, 79, 16, 16));
        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(209, 248, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(91, 98, 73, 51));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/Video Projects/Western-blot-experimental-steps1 (2).jpg")));

        verticalLayout->addWidget(label_3);

        tissue = new QCheckBox(widget);
        tissue->setObjectName(QString::fromUtf8("tissue"));

        verticalLayout->addWidget(tissue);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(327, 98, 116, 101));
        verticalLayout_4 = new QVBoxLayout(widget1);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/Video Projects/Western-blot-experimental-steps2 (4).jpg")));

        verticalLayout_4->addWidget(label_6);

        electrode_chamber = new QCheckBox(widget1);
        electrode_chamber->setObjectName(QString::fromUtf8("electrode_chamber"));

        verticalLayout_4->addWidget(electrode_chamber);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(449, 98, 129, 125));
        verticalLayout_5 = new QVBoxLayout(widget2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/Video Projects/Western-blot-experimental-steps2 (3).jpg")));

        verticalLayout_5->addWidget(label_7);

        tank = new QCheckBox(widget2);
        tank->setObjectName(QString::fromUtf8("tank"));

        verticalLayout_5->addWidget(tank);

        widget3 = new QWidget(centralwidget);
        widget3->setObjectName(QString::fromUtf8("widget3"));
        widget3->setGeometry(QRect(209, 98, 86, 83));
        verticalLayout_3 = new QVBoxLayout(widget3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/Video Projects/Western-blot-experimental-steps2 (2).jpg")));

        verticalLayout_3->addWidget(label_5);

        gel_casette = new QCheckBox(widget3);
        gel_casette->setObjectName(QString::fromUtf8("gel_casette"));

        verticalLayout_3->addWidget(gel_casette);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(91, 60, 501, 16));
        widget4 = new QWidget(centralwidget);
        widget4->setObjectName(QString::fromUtf8("widget4"));
        widget4->setGeometry(QRect(91, 155, 101, 87));
        verticalLayout_2 = new QVBoxLayout(widget4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../../Pictures/Video Projects/Western-blot-experimental-steps1 (3).jpg")));

        verticalLayout_2->addWidget(label_4);

        lysate = new QCheckBox(widget4);
        lysate->setObjectName(QString::fromUtf8("lysate"));

        verticalLayout_2->addWidget(lysate);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 686, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">Lab Simulation</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        tissue->setText(QCoreApplication::translate("MainWindow", "Tissue", nullptr));
        label_6->setText(QString());
        electrode_chamber->setText(QCoreApplication::translate("MainWindow", "Electrode Chamber", nullptr));
        label_7->setText(QString());
        tank->setText(QCoreApplication::translate("MainWindow", "Tank", nullptr));
        label_5->setText(QString());
        gel_casette->setText(QCoreApplication::translate("MainWindow", "Gel Casette", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Click the components that you would combine in the first step of a Western blot. Press OK when done.", nullptr));
        label_4->setText(QString());
        lysate->setText(QCoreApplication::translate("MainWindow", "Lysate/Extracts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
