#include "mainwindow.h"
#include <QApplication>
#include <QString>

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
    MainWindow w;
    w.show();
    return a.exec();
}
