#include "todo.h"
#include "ui_todo.h"
#include<QDebug>
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
