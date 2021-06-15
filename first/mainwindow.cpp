#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QTimer>
#include <QDate>
#include<popup.h>
#include<menu.h>
#include <QDebug>
#include <QCalendar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
   // mydb.setDatabaseName()
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Test()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

class classReminder
{
public:

    QTime monday[4];
    QTime tuesday[4];
    QTime wednesday[4];
    QTime Saturday[4];
    QTime n= QTime(12, 00, 00,000);             // n == 14:00:00
    QString ns=n.toString();
   int flag=0;

}cl;


int i=0;
void MainWindow:: Test()
{  int k=0,i=0;

        // A function to check the day if the day is changed then change the day flag to 0 and also swithd case
        /* if(momday= current day ){
         * current set num 1 ,2 3 ,4
         * compare with predayno if changed then }
         */
        QDate nowDay = QDate::currentDate();
       // QString NowDay= nowDay.weekDayName() ;
       // QString QCalendar::standaloneWeekDayName();
        //QTime now = QTime::currentTime();
for(i=cl.flag;i<=4;i++){

                      int x=1;

                      qDebug()<<"checkin time";
                      //using switch cASE to find the day then ues the day assing ms
                      QString ms=cl.monday[i].toString();                      qDebug() << ms<<"K"<<k;
                      x=QString::compare(cl.ns, ms);                         //comparing current time and the given time

                         if(x==0){
                                        cl.flag=1+i;                          // Alaram and popup also set flag to 1
                                        popUp PopUp;
                                        PopUp.setModal(true);
                                        PopUp.exec();


                                      break;

                                  }

                    }



}

int MainWindow:: timeCheck()
{
    // QTime now = QTime::currentTime();
     //qDebug()<<"checkin time";
    // qDebug() << QTime::currentTime().toString(Qt::ISODate);
    int j=0,x=1 ,i=0;
   int k=0;
   while(k<100)
       {
         /*  QString ms=cl.monday[i].toString();
          // qDebug()<<cl.monday[i];
             qInfo()<<i;

            qInfo()<<ms;

            qInfo()<<cl.ns;
             qInfo()<<"iter";
             qInfo()<<i;
           x=QString::compare(cl.ns, ms);
*/
               k++;
               qInfo()<<k;
               if(k>10) break;

    }



}

void MainWindow::checkTimer()
{


}


void MainWindow::on_timeEditMon1_userTimeChanged(const QTime &time)
{
    cl.monday[0]=time;
    qInfo( "time changed" );



}


void MainWindow::on_timeEditMon2_userTimeChanged(const QTime &time)
{
     cl.monday[1]=time;

}




void MainWindow::on_timeEditMon3_userTimeChanged(const QTime &time)
{
    cl.monday[2]=time;
}


void MainWindow::on_timeEditMon4_userTimeChanged(const QTime &time)
{
     cl.monday[3]=time;
}





void MainWindow::on_pushButton_3_clicked()
{
   timeCheck();


}


void MainWindow::on_timeEditTue_1_userTimeChanged(const QTime &time)
{
    cl.tuesday[0]=time;
}


void MainWindow::on_timeEditTue_2_userTimeChanged(const QTime &time)
{
    cl.tuesday[1]=time;
}


void MainWindow::on_timeEditTue_3_userTimeChanged(const QTime &time)
{
     cl.tuesday[2]=time;
}


void MainWindow::on_timeEditTue_4_userTimeChanged(const QTime &time)
{
     cl.tuesday[3]=time;
}

