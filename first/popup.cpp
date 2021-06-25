#include "popup.h"
#include "ui_popup.h"
#include "mainwindow.h"
#include <menu.h>
#include<QDebug>
#include<DatabaseCon.h>
#include "commondata.h"


int i=1;
popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{
          ui->setupUi(this);
          putdata(poupno);

}

popUp::popUp(int poupno, QWidget *parent):
    QDialog(parent),
    ui(new Ui::popUp)
{
    ui->setupUi(this);
     putdata(poupno);

}



popUp::~popUp()
{
    delete ui;

}

void popUp::putdata(int no)
{   QString sub,link;
    commondata cd;
    DatabseCon con;
    con.connOpen();
    QSqlQuery *qry=new QSqlQuery(con.mydb);
    qry->prepare("select link,sub from Time_Table where sno=:i");
    qry->bindValue(":i",no);

        if(qry->exec())
        {
          qDebug() << "query success:"<<no;
        }
        else
        {
             qDebug() << "error:"
                      << qry->lastError();
        }
        while(qry->next())
        {

               link=qry->value(0).toString();

               sub=qry->value(1).toString();


         }
    ui->textEdit->setText(link);
    ui->label_sub->setText(sub);


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


