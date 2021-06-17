#include "popup.h"
#include "ui_popup.h"
#include "mainwindow.h"
#include <menu.h>
#include<QDebug>

popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{
    ui->setupUi(this);
   Menu con;
   QSqlQueryModel *modal= new QSqlQueryModel();
   con.connOpen();
   QSqlQuery *qry=new QSqlQuery(con.mydb);
   qry->prepare("select link from Time_Table where sno=1");
   qry->exec();
   modal->setQuery(*qry);
   ui->listView->setModel(modal);

}


popUp::~popUp()
{
    delete ui;

}

void popUp::on_label_linkActivated(const QString &link)
{

}

