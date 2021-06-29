#ifndef POPUP_H
#define POPUP_H

#include <QDialog>
#include<DatabaseCon.h>
#include "commondata.h"



namespace Ui {
class popUp;
class DatabseCon;
}

class popUp : public QDialog,public DatabseCon
{
    Q_OBJECT

public:
    int poupno;
    popUp();
    explicit popUp(QWidget *parent = nullptr);
    popUp(int poupno,QWidget *parent = nullptr);
    ~popUp();
    void putdata(int no);

private slots:

    void on_label_linkActivated(const QString &link);


    void on_pushButton_clicked();
    void alarm();

private:
     int j;
    Ui::popUp *ui;

};

#endif // POPUP_H
