#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextStream>
#include <QTimer>
#include <QDate>
#include<popup.h>
#include<menu.h>
#include <QDebug>
#include <QCalendar>
#include "DatabaseCon.h"
QTime tm;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Menu con;
    QSqlQueryModel *modal= new QSqlQueryModel();
    con.connOpen();
    QSqlQuery *qry=new QSqlQuery(con.mydb);
    qry->prepare("select  time,sub,link from Time_Table");
    //qry->prepare("select * from Time_Table");
    qry->exec();
   if(qry->next())
               {
                       //  QVariant h=qry->value(0);
                       QTime time1=qry->value(0).toTime();
                       ui->MonTime_1->setTime(time1);
                       QString sub1=qry->value(1).toString();
                       ui->MonSub_1->setText(sub1);
                       QString link1=qry->value(2).toString();
                       ui->MonLink_1->setText(link1);




                }
   if(qry->next())
               {


                       QTime time2=qry->value(0).toTime();
                       ui->MonTime_2->setTime(time2);
                       QString sub2=qry->value(1).toString();
                       ui->MonSub_2->setText(sub2);
                       QString link2=qry->value(2).toString();
                       ui->MonLink_2->setText(link2);
                        qDebug()<<time2<<sub2;

                }

}

MainWindow::~MainWindow()
{
    delete ui;
}


class classReminder
{
public:

};

    QString link, subname;

           void MainWindow:: addTime(QTime Time,int no)
           {
                       DatabseCon con;
                       qInfo()<<"time handler";
                       int Hr=Time.hour();
                       int Min=Time.minute();
                       qDebug()<<"hr"<<Hr<<"min"<<Min;
                       // cl.monday[0]=time;
                       if(!con.connOpen())
                       {
                                    qInfo()<<"not connected";
                                    return ;
                       }
                       con.connOpen();


                       QSqlQuery qry;
                        qInfo()<<Time.toString();
                       QSqlQuery query;
                        query.prepare("update  Time_Table set hour=:monHr,minute=:monMin,time=:Time where sno=:no");
                        query.bindValue(":monHr", Hr);
                        query.bindValue(":monMin", Min);
                        query.bindValue(":no", no);
                         query.bindValue(":Time", Time);

                         if(query.exec())
                         {
                            qDebug() << "query success:";
                         }
                         else
                         {
                              qDebug() << "error:"
                                       << query.lastError();
                         }
                       qInfo( "time changed" );
                       con.cnnClose();
                       }
   void MainWindow ::Addlink(QString link,int no)


            {
                       DatabseCon con;


                     if(!con.connOpen())
                     {
                                  qInfo()<<"not connected";
                                  return ;
                     }
                     con.connOpen();



                     QSqlQuery query;
                      query.prepare("update  Time_Table set link='"+link+"'  where sno=:no");

                      query.bindValue(":no", no);

                       if(query.exec())
                       {
                          qDebug() << "query success:";
                       }
                       else
                       {
                            qDebug() << "error:"
                                     << query.lastError();
                       }
                     qInfo( "link inserted" );
                    con.cnnClose();
           }

   void MainWindow ::AddSub(QString Sub,int no)


            {
                       DatabseCon con;


                     if(!con.connOpen())
                     {
                                  qInfo()<<"not connected";
                                  return ;
                     }
                     con.connOpen();



                     QSqlQuery query;
                      query.prepare("update  Time_Table set sub='"+Sub+"'  where sno=:no");

                      query.bindValue(":no", no);

                       if(query.exec())
                       {
                          qDebug() << "query success:";
                       }
                       else
                       {
                            qDebug() << "error:"
                                     << query.lastError();
                       }
                     qInfo( "link inserted" );
                    con.cnnClose();
           }


















//.............................




void MainWindow::on_MonTime_1_userTimeChanged(const QTime &time)
{
    addTime(time,1);
}


void MainWindow::on_MonSub_1_textEdited(const QString &arg1)
{
  QString sub=ui->MonSub_1->text();
  AddSub( sub,1);
}


void MainWindow::on_MonLink_1_textEdited(const QString &arg1)
{
    QString link=ui->MonLink_1->text();

      Addlink( link,1);
}

//.......................
void MainWindow::on_MonTime_2_userTimeChanged(const QTime &time)
{
     addTime(time,2);
}


void MainWindow::on_MonSub_2_textEdited(const QString &arg1)
{
    QString sub=ui->MonSub_2->text();
    AddSub( sub,2);
}


void MainWindow::on_MonLink_2_textEdited(const QString &arg1)
{
    QString link=ui->MonLink_2->text();

      Addlink( link,2);
}
//...........................

void MainWindow::on_MonTime_3_userTimeChanged(const QTime &time)
{
     addTime(time,3);
}


void MainWindow::on_MonSub_3_textEdited(const QString &arg1)
{
    QString sub=ui->MonSub_3->text();
    AddSub( sub,3);

}


void MainWindow::on_MonLink_3_textEdited(const QString &arg1)
{
    QString link=ui->MonLink_3->text();

      Addlink( link,3);
}

//..........................
void MainWindow::on_MonTime_4_userTimeChanged(const QTime &time)
{
     addTime(time,4);
}


void MainWindow::on_MonSub_4_textEdited(const QString &arg1)
{
    QString sub=ui->MonSub_4->text();
    AddSub( sub,4);
}


void MainWindow::on_MonLink_4_textEdited(const QString &arg1)
{
    QString link=ui->MonLink_4->text();

      Addlink( link,4);
}

//................................
