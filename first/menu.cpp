#include "menu.h"
#include "ui_menu.h"
#include <mainwindow.h>
#include<todo.h>

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    if(!connOpen())
    ui->label->setText("failed to connect");
    else ui->label->setText("connected to DB");
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
     mainWindow= new MainWindow(this);
     mainWindow->show();

}


void Menu::on_pushButton_2_clicked()
{
    todo = new Todo(this);
    todo->show();
}


void Menu::on_label_linkActivated(const QString &link)
{

}

