#include "mainwindow.h"
#include "menu.h"
#include <QApplication>
#include <QString>
#include<QDebug>
#include<QSplashScreen>
#include<QTimer>






int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash= new QSplashScreen;
    splash->setPixmap(QPixmap(":/resources/img/image.png"));
    splash->show();
    qDebug() << "App path : " << qApp->applicationDirPath();
    Menu w;
    QTimer::singleShot(3000,splash,SLOT(close()));
    QTimer::singleShot(3000,&w,SLOT(show()));
    w.show();
    w.setWindowTitle("Time4class");


   return a.exec();
}
