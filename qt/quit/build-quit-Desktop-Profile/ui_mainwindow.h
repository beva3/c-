/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonQuit;
    QTableView *tableView;
    QPushButton *Tmp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(267, 274);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonQuit = new QPushButton(centralwidget);
        buttonQuit->setObjectName(QString::fromUtf8("buttonQuit"));
        buttonQuit->setEnabled(true);
        buttonQuit->setGeometry(QRect(149, 220, 111, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        buttonQuit->setFont(font);
        buttonQuit->setCursor(QCursor(Qt::PointingHandCursor));
        buttonQuit->setCheckable(false);
        buttonQuit->setFlat(true);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(9, 9, 251, 211));
        Tmp = new QPushButton(centralwidget);
        Tmp->setObjectName(QString::fromUtf8("Tmp"));
        Tmp->setGeometry(QRect(10, 220, 141, 31));
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
        buttonQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        Tmp->setText(QCoreApplication::translate("MainWindow", "tmp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
