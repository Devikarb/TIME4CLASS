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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Todo
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_logo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Todo)
    {
        if (Todo->objectName().isEmpty())
            Todo->setObjectName(QString::fromUtf8("Todo"));
        Todo->resize(600, 750);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Todo->sizePolicy().hasHeightForWidth());
        Todo->setSizePolicy(sizePolicy);
        Todo->setMinimumSize(QSize(600, 750));
        Todo->setMaximumSize(QSize(600, 750));
        Todo->setAutoFillBackground(true);
        Todo->setStyleSheet(QString::fromUtf8("background-image: url(:/resources/img/background2.png);"));
        centralwidget = new QWidget(Todo);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_logo = new QLabel(centralwidget);
        label_logo->setObjectName(QString::fromUtf8("label_logo"));
        label_logo->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/image1.png")));
        label_logo->setScaledContents(false);
        label_logo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_logo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(37, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setAutoFillBackground(false);

        verticalLayout_2->addWidget(lineEdit);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setLayoutDirection(Qt::RightToLeft);

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalSpacer = new QSpacerItem(37, 17, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(17, 37, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_3->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        Todo->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Todo);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 25));
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
        label_logo->setText(QString());
        lineEdit->setText(QCoreApplication::translate("Todo", "Enter Task", nullptr));
        pushButton->setText(QCoreApplication::translate("Todo", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Todo: public Ui_Todo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODO_H
