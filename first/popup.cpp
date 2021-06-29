#include "popup.h"
#include "ui_popup.h"
#include "mainwindow.h"
#include <menu.h>
#include<QDebug>
#include<DatabaseCon.h>
#include "commondata.h"



popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{
          ui->setupUi(this);


}

popUp::popUp(int poupno, QWidget *parent):
    QDialog(parent),
    ui(new Ui::popUp)
{
    ui->setupUi(this);
     putdata(poupno);
     alarm();

}



popUp::~popUp()
{
    delete ui;

}

void popUp::putdata(int no)
{   QString sub,link;

    connOpen();// opening the db connection
    QSqlQuery *qry=new QSqlQuery(mydb);
    qry->prepare("select link,sub from Time_Table where sno=:i");  // prepairing the query to fetch the data from the table
    qry->bindValue(":i",no); //binding  the i in thre query with no

        if(qry->exec())
        {
          qDebug() << "query success:"<<no;
        }
        else
        {
             qDebug() << "error:"
                      << qry->lastError();
        }
        while(qry->next())// executing the query here it is fetching only one row of data that contAINS one link and one sub
        {

               link=qry->value(0).toString();// the first value fetched is stored into the variable link

               sub=qry->value(1).toString();//


         }
    ui->textEdit->setText(link);//to set the link in the edit tect box
    ui->label_sub->setText(sub);// to set the sub


}



void popUp::alarm()
{
    QApplication::beep() ;

}


