#include "menu.h"
#include "ui_menu.h"
#include <mainwindow.h>
#include<todo.h>
#include <QTimer>
#include<QDebug>
#include<DatabaseCon.h>

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
   // MainWindow m;
   ui->setupUi(this);



 QTimer *timer = new QTimer(this);
   connect(timer, SIGNAL(timeout()), this, SLOT(Test()));
   timer->start(1000);



}

Menu::~Menu()
{
    delete ui;
}
int flag =0;

void Menu:: Test()
 {
   QCalendar cal;
   int dbHour,dbMinute,k=0,i=0, prevday=0;;
   QDate nowDate = QDate::currentDate();
   int nowday = cal.dayOfWeek(nowDate) ;// returns 1 for mon ,2 for tue etc..
   qDebug()<<"day"<<nowday;
   QTime now = QTime::currentTime();
   int nowHr=now.hour();
   int nowMin=now.minute();
   qDebug()<<"hr"<<nowHr<<"min"<<nowMin;
   int j=0;
   switch (nowday) {
       case 1:j= 1;
              break;
       case 2:j= 5;
              break;
       case 3:j= 9;
              break;
       case 4:j= 13;
              break;
       case 5:j= 17;
              break;
      default:
           break;

   }

   // QDate nowDay = partsFromDate(nowDate);
   // QString NowDay= nowDay.weekDayName() ;
   // QString QCalendar::standaloneWeekDayName();

 for(i=flag;i<=4;i++){
       //int QDate::dayOfWeek(QCalendar cal)
       if(prevday!=nowday)
               {
                   prevday=nowday;
                   flag=0;
               }

       Menu con;
       j=j+flag;
       // QSqlQueryModel *modal= new QSqlQueryModel();
       con.connOpen();
       QSqlQuery *qry=new QSqlQuery(con.mydb);
       qry->prepare("select hour,minute from Time_Table where sno=1");
       qry->bindValue(":j", j);
       qry->exec();
       //  qDebug<<"size"<<qry->;

       while(qry->next())
                  {
                          //  QVariant h=qry->value(0);
                           dbHour=qry->value(0).toInt();
                           dbMinute=qry->value(1).toInt();
                        //   qDebug()<<"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhh"<<h;

                   }
       qDebug()<<"nowhr="<<nowHr<<"dbhr"<<dbHour<<"min"<<dbMinute;
       int samp=9,sampm=14;
       //if(nowHr==dbHour&&nowMin==dbMinute)
       if(samp==dbHour&&sampm==dbMinute)                        //comparing current time and the given time

                   {
                           flag=1+i;                          // Alaram and popup also set flag to 1
                           popUp PopUp;
                           PopUp.setModal(true);
                           PopUp.exec();


                         break;

                     }

       }



 }




void Menu::on_pushButton_clicked()
{
     mainWindow= new MainWindow(this);
     mainWindow->show();

}


void Menu::on_pushButton_2_clicked()
{
    todo = new Todo(this);
    todo->show();
}


void Menu::on_label_linkActivated(const QString &link)
{

}

