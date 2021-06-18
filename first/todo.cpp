#include "todo.h"
#include "ui_todo.h"
#include<QDebug>
#include<QPushButton>
#include<QCheckBox>
#include<DatabaseCon.h>
std::vector<QCheckBox*> checkBoxes;
Todo::Todo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Todo)
{
    ui->setupUi(this);
    //QObject::connect(ui->pushButton,&QPushButton::clicked,
                   //  this,&Todo::onAddWidget);

}

Todo::~Todo()
{
    delete ui;
}

void Todo::on_pushButton_clicked()
{ QString text = ui->lineEdit->text();
    QString checkBoxText=text;
    QCheckBox* checkbox=new QCheckBox(checkBoxText);
    ui->verticalLayout->addWidget(checkbox);

           QObject::connect(checkbox,&QCheckBox::stateChanged,this,&Todo::RemoveTodo);            //  this,&Todo::onAddWidget);

}

void Todo::RemoveTodo()
{ qDebug()<<"hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhh";
    QCheckBox* checkbox=qobject_cast<QCheckBox*>(sender());
    delete checkbox;

}
