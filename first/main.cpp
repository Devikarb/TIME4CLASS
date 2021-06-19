#include "mainwindow.h"
#include "menu.h"
#include <QApplication>
#include <QString>
#include<QDebug>
#include<QSplashScreen>
#include<QTimer>

class event {
public:
    long m_hour;
    long m_minutes;
    long m_day;
    long m_date;
    long duration;
    long day;
    QString  evetDis;
public:

    virtual void checkTime(int sTime ,int Duration,int Day, QString discription );
    virtual void setEvent(int sTimeHour ,int sTimeMin,int sTimeday,int DurationMinutes,int Day, QString discription );
    virtual void getEvent(int sTime ,int Duration,int Day, QString discription );
    virtual void Delete(int eventdis);
};



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplashScreen *splash= new QSplashScreen;
    splash->setPixmap(QPixmap(":/resources/img/image.png"));
    splash->show();

    //MainWindow w;
   qDebug() << "App path : " << qApp->applicationDirPath();
    Menu w;

    QTimer::singleShot(3000,splash,SLOT(close));
    QTimer::singleShot(3000,&w,SLOT(show()));
    //w.show();


    return a.exec();
}
