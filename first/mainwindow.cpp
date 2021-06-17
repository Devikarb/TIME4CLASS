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
    QString link, subname;
  // int flag=0;
           void addData(QTime Time,int no)
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
                        query.prepare("update  Time_Table set hour=:monHr,minute=:monMin  where sno=:no");
                        query.bindValue(":monHr", Hr);
                        query.bindValue(":monMin", Min);
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
                       qInfo( "time changed" );
                       con.cnnClose();
                       }
   void Addlink(QString link,int no)


            {
                     Menu con;


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
                     con.close();
           }
       void loadFrmDB()
       {



       }

            }cl;








void MainWindow::on_timeEditMon1_userTimeChanged(const QTime &time)
{
    cl.addData(time,1);

}


void MainWindow::on_timeEditMon2_userTimeChanged(const QTime &time)
{
    cl.addData(time,2);

}




void MainWindow::on_timeEditMon3_userTimeChanged(const QTime &time)
{
    cl.addData(time,3);
}


void MainWindow::on_timeEditMon4_userTimeChanged(const QTime &time)
{
    cl.addData(time,4);
}







void MainWindow::on_timeEditTue_1_userTimeChanged(const QTime &time)
{
    cl.addData(time,5);
}


void MainWindow::on_timeEditTue_2_userTimeChanged(const QTime &time)
{
    cl.addData(time,6);
}


void MainWindow::on_timeEditTue_3_userTimeChanged(const QTime &time)
{
     cl.addData(time,6);
}


void MainWindow::on_timeEditTue_4_userTimeChanged(const QTime &time)
{
     cl.addData(time,7);
}


void MainWindow::on_label_2_linkActivated(const QString &link)
{

}


void MainWindow::on_monLink1_editingFinished()
{  QString link=ui->monLink1->text();

  cl.Addlink( link,1);

}





void MainWindow::on_lineEditmon_2_textChanged(const QString &arg1)
{ QString link=ui->lineEditmon_2->text();

    cl.Addlink( link,2);
}


void MainWindow::on_monlink3_textChanged(const QString &arg1)
{
    QString link=ui->monlink3->text();

        cl.Addlink( link,2);
}


void MainWindow::on_monlink4_textChanged(const QString &arg1)
{
    QString link=ui->monlink4->text();

        cl.Addlink( link,2);
}


void MainWindow::on_tuelink1_textChanged(const QString &arg1)
{
    QString link=ui->tuelink1->text();

        cl.Addlink( link,2);
}

