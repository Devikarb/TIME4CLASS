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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Todo
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Todo)
    {
        if (Todo->objectName().isEmpty())
            Todo->setObjectName(QString::fromUtf8("Todo"));
        Todo->resize(800, 600);
        centralwidget = new QWidget(Todo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(79, 70, 571, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 440, 93, 28));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(590, 410, 113, 22));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(110, 430, 81, 20));
        Todo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Todo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        Todo->setMenuBar(menubar);
        statusbar = new QStatusBar(Todo);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Todo->setStatusBar(statusbar);

        retranslateUi(Todo);

        QMetaObject::connectSlotsByName(Todo);
    } // setupUi

    void retranslateUi(QMainWindow *Todo)
    {
        Todo->setWindowTitle(QCoreApplication::translate("Todo", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("Todo", "ADD", nullptr));
        checkBox->setText(QCoreApplication::translate("Todo", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Todo: public Ui_Todo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_H
