/********************************************************************************
** Form generated from reading UI file 'todo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODO_H
#define UI_TODO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Todo
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Todo)
    {
        if (Todo->objectName().isEmpty())
            Todo->setObjectName(QString::fromUtf8("Todo"));
        Todo->resize(800, 600);
        menubar = new QMenuBar(Todo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        Todo->setMenuBar(menubar);
        centralwidget = new QWidget(Todo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Todo->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Todo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Todo->setStatusBar(statusbar);

        retranslateUi(Todo);

        QMetaObject::connectSlotsByName(Todo);
    } // setupUi

    void retranslateUi(QMainWindow *Todo)
    {
        Todo->setWindowTitle(QCoreApplication::translate("Todo", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Todo: public Ui_Todo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_H
