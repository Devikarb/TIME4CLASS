#include "popup.h"
#include "ui_popup.h"
#include "MainWindow.h"
#include <menu.h>
#include<QDebug>
#include<DatabaseCon.h>

int i=1;
Menu m;
popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{ //int  popno=m.senddata();
    QString sub,link;
    ui->setupUi(this);
    DatabseCon con;

   QSqlQueryModel *modal= new QSqlQueryModel();
   con.connOpen();
   QSqlQuery *qry=new QSqlQuery(con.mydb);
   qry->prepare("select link,sub from Time_Table where sno=:i");
  // qry->bindValue(":i", popno);

   if(qry->exec())
   {
     //qDebug() << "query success:"<<popno;
   }
   else
   {
        qDebug() << "error:"
                 << qry->lastError();
   }
   while(qry->next())
               {
                     //  QVariant h=qry->value(0);
                      link=qry->value(0).toString();

                        sub=qry->value(1).toString();


                }


   modal->setQuery(*qry);
   ui->textEdit->setText(link);
   ui->label_4->setText(sub);



}


popUp::~popUp()
{
    delete ui;

}

void popUp::on_label_linkActivated(const QString &link)
{

}


void popUp::on_pushButton_clicked()
{i=0;

}

void popUp::alarm()
{i=0;
    QApplication::beep() ;

}


