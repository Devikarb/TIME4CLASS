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
    try{
    ui->setupUi(this);

   DatabseCon con;
    QSqlQueryModel *modal= new QSqlQueryModel();
    con.connOpen();
    QSqlQuery *qry=new QSqlQuery(con.mydb);
    qry->prepare("select  time,sub,link from Time_Table");
    //qry->prepare("select * from Time_Table");
    qry->exec();
    QTime time[20];
    QString sub[20],link[20];


int i=0;
   while(qry->next())
               {
                    i++;   //  QVariant h=qry->value(0);
                      time[i]=qry->value(0).toTime();

                        sub[i]=qry->value(1).toString();

                        link[i]=qry->value(2).toString();


                       qDebug()<<"fisrt record";



                }



   ui->MonTime_1->setTime(time[1]);
   ui->MonSub_1->setText(sub[1]);
   ui->MonLink_1->setText(link[1]);

   ui->MonTime_2->setTime(time[2]);
   ui->MonSub_2->setText(sub[2]);
   ui->MonLink_2->setText(link[2]);

   ui->MonTime_3->setTime(time[3]);
   ui->MonSub_3->setText(sub[3]);
   ui->MonLink_3->setText(link[3]);

   ui->MonTime_4->setTime(time[4]);
   ui->MonSub_4->setText(sub[4]);
   ui->MonLink_4->setText(link[4]);

   ui->TuesTime_1->setTime(time[5]);
   ui->TuesSub_1->setText(sub[5]);
   ui->TuesLink_1->setText(link[5]);

   ui->TuesTime_2->setTime(time[6]);
   ui->TuesSub_2->setText(sub[6]);
   ui->TuesLink_2->setText(link[6]);


    }catch (const std::exception& ex) {
        qDebug()<<"Exception .."<< ex.what();
      } catch (...) {
 qDebug()<<"Exception ..";
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

void MainWindow::on_TuesTime_1_userTimeChanged(const QTime &time)
{
addTime(time,5);
}


void MainWindow::on_TuesSub_1_textEdited(const QString &arg1)
{
    QString sub=ui->TuesSub_1->text();
    AddSub( sub,5);
}


void MainWindow::on_TuesLink_1_textEdited(const QString &arg1)
{
    QString link=ui->TuesLink_1->text();

      Addlink( link,5);
}


void MainWindow::on_TuesTime_2_userTimeChanged(const QTime &time)
{
addTime(time,6);
}


void MainWindow::on_TuesSub_2_textEdited(const QString &arg1)
{
    QString sub=ui->TuesSub_2->text();
    AddSub( sub,6);

}


void MainWindow::on_TuesLink_2_textEdited(const QString &arg1)
{
    QString link=ui->TuesLink_2->text();

      Addlink( link,6);
}


void MainWindow::on_TuesTime_3_userTimeChanged(const QTime &time)
{
    addTime(time,7);

}


void MainWindow::on_TuesSub_3_textEdited(const QString &arg1)
{
    QString sub=ui->TuesSub_3->text();
    AddSub( sub,7);

}


void MainWindow::on_TuesLink_3_textEdited(const QString &arg1)
{
    QString link=ui->TuesLink_3->text();

      Addlink( link,7);
}


void MainWindow::on_TuesTime_4_userTimeChanged(const QTime &time)
{
    addTime(time,8);
}


void MainWindow::on_TuesSub_4_textEdited(const QString &arg1)
{
    QString sub=ui->TuesSub_4->text();
    AddSub( sub,8);

}


void MainWindow::on_TuesLink_4_textEdited(const QString &arg1)
{
    QString link=ui->TuesLink_4->text();

      Addlink( link,8);
}
//........

void MainWindow::on_WedTime_1_userTimeChanged(const QTime &time)
{
    addTime(time,9);
}


void MainWindow::on_WedSub_1_textEdited(const QString &arg1)
{
    QString sub=ui->WedSub_1->text();
    AddSub( sub,9);

}


void MainWindow::on_WedLink_1_textEdited(const QString &arg1)
{
    QString link=ui->WedLink_1->text();

      Addlink( link,9);
}


void MainWindow::on_WedTime_2_userTimeChanged(const QTime &time)
{
    addTime(time,10);
}


void MainWindow::on_WedSub_2_textEdited(const QString &arg1)
{
    QString sub=ui->WedSub_2->text();
    AddSub( sub,10);
}


void MainWindow::on_WedLink_2_textEdited(const QString &arg1)
{
    QString link=ui->WedLink_2->text();

      Addlink( link,10);
}


void MainWindow::on_WedTime_3_userTimeChanged(const QTime &time)
{
    addTime(time,11);
}


void MainWindow::on_WedSub_3_textEdited(const QString &arg1)
{
    QString sub=ui->WedSub_3->text();
    AddSub( sub,11);
}


void MainWindow::on_WedLink_3_textEdited(const QString &arg1)
{
    QString link=ui->WedLink_3->text();

      Addlink( link,11);
}


void MainWindow::on_WedTime_4_userTimeChanged(const QTime &time)
{
    addTime(time,12);
}


void MainWindow::on_WedSub_4_textEdited(const QString &arg1)
{
    QString sub=ui->WedSub_4->text();
    AddSub( sub,12);
}


void MainWindow::on_WedLink_4_textEdited(const QString &arg1)
{
    QString link=ui->WedLink_4->text();

      Addlink( link,12);
}


void MainWindow::on_ThurTime_1_userTimeChanged(const QTime &time)
{
    addTime(time,13);
}


void MainWindow::on_ThurSub_1_textEdited(const QString &arg1)
{
    QString sub=ui->ThurSub_1->text();
    AddSub( sub,13);
}


void MainWindow::on_ThurLink_1_textEdited(const QString &arg1)
{
    QString link=ui->ThurLink_1->text();

      Addlink( link,13);
}


void MainWindow::on_ThurTime_2_userTimeChanged(const QTime &time)
{
    addTime(time,14);
}


void MainWindow::on_ThurSub_2_textEdited(const QString &arg1)
{
    QString sub=ui->ThurSub_2->text();
    AddSub( sub,14);
}


void MainWindow::on_ThurLink_2_textEdited(const QString &arg1)
{
    QString link=ui->ThurLink_2->text();

      Addlink( link,14);
}


void MainWindow::on_ThurTime_3_userTimeChanged(const QTime &time)
{
    addTime(time,15);
}


void MainWindow::on_ThurSub_3_textEdited(const QString &arg1)
{
    QString sub=ui->ThurSub_3->text();
    AddSub( sub,15);
}


void MainWindow::on_ThurLink_3_textEdited(const QString &arg1)
{
    QString link=ui->ThurLink_3->text();

      Addlink( link,15);
}


void MainWindow::on_ThurTime_4_userTimeChanged(const QTime &time)
{
    addTime(time,16);
}


void MainWindow::on_ThurSub_4_textEdited(const QString &arg1)
{
    QString sub=ui->ThurSub_4->text();
    AddSub( sub,16);
}


void MainWindow::on_ThurLink_4_textEdited(const QString &arg1)
{
    QString link=ui->ThurLink_4->text();

      Addlink( link,16);
}


void MainWindow::on_FriTime_1_userTimeChanged(const QTime &time)
{
    addTime(time,17);
}


void MainWindow::on_FriSub_1_textEdited(const QString &arg1)
{
    QString sub=ui->FriSub_1->text();
    AddSub( sub,17);
}


void MainWindow::on_FriLink_1_textEdited(const QString &arg1)
{
    QString link=ui->FriLink_1->text();

      Addlink( link,17);
}


void MainWindow::on_FriTime_2_userTimeChanged(const QTime &time)
{
   addTime(time,18);
}


void MainWindow::on_FriSub_2_textEdited(const QString &arg1)
{
    QString sub=ui->FriSub_2->text();
    AddSub( sub,18);
}


void MainWindow::on_FriLink_2_textEdited(const QString &arg1)
{
    QString link=ui->FriLink_2->text();

      Addlink( link,18);
}


void MainWindow::on_FriTime_3_userTimeChanged(const QTime &time)
{
    addTime(time,19);
}


void MainWindow::on_FriSub_3_textEdited(const QString &arg1)
{
    QString sub=ui->FriSub_3->text();
    AddSub( sub,19);
}


void MainWindow::on_FriLink_3_textEdited(const QString &arg1)
{
    QString link=ui->FriLink_3->text();

      Addlink( link,19);
}


void MainWindow::on_FriTime_4_userTimeChanged(const QTime &time)
{
    addTime(time,20);
}


void MainWindow::on_FriSub_4_textEdited(const QString &arg1)
{
    QString sub=ui->FriSub_4->text();
    AddSub( sub,20);
}


void MainWindow::on_FriLink_4_textEdited(const QString &arg1)
{
    QString link=ui->FriLink_4->text();

      Addlink( link,20);
}

