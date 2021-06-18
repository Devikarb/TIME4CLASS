#include "todo.h"
#include "ui_todo.h"
#include<QDebug>
#include<QPushButton>
#include<QCheckBox>
Todo::Todo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Todo)
{
    ui->setupUi(this);

}

Todo::~Todo()
{
    delete ui;
}

void Todo::on_pushButton_clicked()
{ QString text = ui->lineEdit->text();
    ui->gridLayout->addWidget(new QCheckBox(text));
}

