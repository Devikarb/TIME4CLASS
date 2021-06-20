/********************************************************************************
** Form generated from reading UI file 'popup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUP_H
#define UI_POPUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_popUp
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QFrame *frame;
    QListView *listView;

    void setupUi(QDialog *popUp)
    {
        if (popUp->objectName().isEmpty())
            popUp->setObjectName(QString::fromUtf8("popUp"));
        popUp->resize(500, 400);
        popUp->setMinimumSize(QSize(500, 400));
        popUp->setMaximumSize(QSize(500, 400));
        popUp->setAutoFillBackground(true);
        popUp->setStyleSheet(QString::fromUtf8("background-image: url(:/resources/img/background2.png);"));
        label = new QLabel(popUp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 261, 81));
        label->setStyleSheet(QString::fromUtf8("image: url(:/resources/img/image1.png);"));
        pushButton = new QPushButton(popUp);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 330, 93, 28));
        frame = new QFrame(popUp);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 280, 120, 80));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        listView = new QListView(popUp);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(120, 121, 261, 191));

        retranslateUi(popUp);
        QObject::connect(pushButton, SIGNAL(clicked()), popUp, SLOT(reject()));

        QMetaObject::connectSlotsByName(popUp);
    } // setupUi

    void retranslateUi(QDialog *popUp)
    {
        popUp->setWindowTitle(QCoreApplication::translate("popUp", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("popUp", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class popUp: public Ui_popUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUP_H
