#include "todo.h"
#include "ui_todo.h"
#include<QDebug>
#include<QPushButton>
#include<QCheckBox>
#include<DatabaseCon.h>
#include<QPixmap>

std::vector<QCheckBox*> checkBoxes;
Todo::Todo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Todo)
{
    ui->setupUi(this);


    DatabseCon con;
    con.connOpen();

    QSqlQuery *qry=new QSqlQuery(con.mydb);

    qry->prepare("select dicrp from ToDo");
qry->exec();

    while(qry->next())
               {

                        QString text=qry->value(0).toString();
                        qDebug()<<text;
                        QCheckBox* checkbox=new QCheckBox(text);
                        ui->verticalLayout_4->addWidget(checkbox);
                        QObject::connect(checkbox,&QCheckBox::stateChanged,this,&Todo::RemoveTodo);


                }
con.cnnClose();




}

Todo::~Todo()
{
    delete ui;
}

void Todo::on_pushButton_clicked()
{   QString text = ui->lineEdit->text();
    QString checkBoxText=text;
    QCheckBox* checkbox=new QCheckBox(checkBoxText);
    ui->verticalLayout_4->addWidget(checkbox);
    QObject::connect(checkbox,&QCheckBox::stateChanged,this,&Todo::RemoveTodo);

     DatabseCon con;
    con.connOpen();
    QSqlQuery *qry=new QSqlQuery(con.mydb);

    qry->prepare("INSERT INTO ToDo (dicrp)  VALUES ('"+text+"') ");






        if(qry->exec())
        {
           qDebug() << "query success:";
        }
        else
        {
             qDebug() << "error:"
                      << qry->lastError();
        }
}

void Todo::RemoveTodo()
{
    QCheckBox* checkbox=qobject_cast<QCheckBox*>(sender());
    QString text = checkbox->text();
    //QString pLineEdit = jjjjj(QCheckBox*)pLine->widget();
     qDebug()<<text;
     qDebug()<<text;
    delete checkbox;
     DatabseCon con;
    con.connOpen();
    QSqlQuery *qry=new QSqlQuery(con.mydb);
 QString qstr="DELETE FROM  ToDo WHERE dicrp=('"+text+"' )";
    qry->prepare(qstr);
 qDebug() << qstr;
    qry->bindValue(":text", text);




        if(qry->exec())
        {
           qDebug() << "query success:";
        }
        else
        {
             qDebug() << "error:"
                      << qry->lastError();
        }



}
