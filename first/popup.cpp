#include "popup.h"
#include "ui_popup.h"
#include "mainwindow.h"
 int flag=0;
popUp::popUp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popUp)
{
    ui->setupUi(this);


}


popUp::~popUp()
{
    delete ui;

}
