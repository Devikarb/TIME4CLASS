#include "menu.h"
#include "ui_menu.h"
#include <mainwindow.h>
#include<todo.h>
#include <QTimer>
#include<QDebug>
#include<DatabaseCon.h>
#include<QPixmap>
#include "commondata.h"


Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{

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
   QString  DBprevdate;
   int dbHour,dbMinute,k=0,i=0, prevday=0;;
   QDate nowDate = QDate::currentDate();

   QString nowdate =nowDate.toString();



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
      default:j=5;
           break;

   }


 for(i=j;i<j+4;i++){


      DatabseCon con;

       con.connOpen();

       QSqlQuery *qry=new QSqlQuery(con.mydb);

       qry->prepare("select hour,minute,prevdate from Time_Table where sno=:j");
       qry->bindValue(":j", i);
       qry->exec();

       while(qry->next())
                  {
                          //  QVariant h=qry->value(0);
                           dbHour=qry->value(0).toInt();
                           dbMinute=qry->value(1).toInt();
                           DBprevdate=qry->value(2).toString();


                   }
con.cnnClose();

qDebug()<<"nowhr="<<nowHr<<"dbhr"<<dbHour<<"min"<<dbMinute<<"nowdate"<<nowdate<<"prevdate"<<DBprevdate;
   //if(nowHr==dbHour&&nowMin==dbMinute&&nowdate!=DBprevdate)//comparing current time and the given time


                   {
                                                    // Alaram and popup also set flag to 1

                                           // Alaram and popup also set flag to 1
                           popUp PopUp(i);

                           PopUp.setModal(true);
                           PopUp.exec();
                           DatabseCon con;

                            con.connOpen();
                            QSqlQuery *qry=new QSqlQuery(con.mydb);

                            qry->prepare("update  Time_Table set prevdate=:nowdate where sno=:j");
                            qry->bindValue(":j", i);
                            qry->bindValue(":nowdate", nowdate);
                            qry->exec();
                            con.cnnClose();



                     }


       }



 }




void Menu::on_pushButton_clicked()
{
     mainWindow= new MainWindow(this);
     mainWindow->show();
     mainWindow->setWindowTitle("Class Remainder");

}


void Menu::on_pushButton_2_clicked()
{
    todo = new Todo(this);
    todo->show();
    todo->setWindowTitle("To-do list");
}


void Menu::on_label_linkActivated(const QString &link)
{

}

