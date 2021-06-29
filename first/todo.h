#ifndef TODO_H
#define TODO_H

#include <QMainWindow>
#include<DatabaseCon.h>


namespace Ui {
class Todo;
class DatabseCon;
}

class Todo : public QMainWindow,public DatabseCon
{
    Q_OBJECT

public:
    explicit Todo(QWidget *parent = nullptr);
    ~Todo();

private slots:
    void on_pushButton_clicked();
void RemoveTodo();
private:

    Ui::Todo *ui;
};

#endif // TODO_H
