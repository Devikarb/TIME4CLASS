#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include<mainwindow.h>
#include<todo.h>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase mydb;
    void cnnClose()
    {
      mydb.close();
      mydb.removeDatabase(QSqlDatabase::defaultConnection);

    }
    bool connOpen()
    {
        QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:\\sqlite\\sqlite-tools-win32-x86-3350500\\devikas.t4c");
        if(!mydb.open())
        {
                     qInfo()<<"not connected";
                     return false;
        }
        else
        {
                     qInfo()<<"connected";
                     return true;
        }
    }

    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::Menu *ui;
    MainWindow *mainWindow;
    Todo *todo;

};

#endif // MENU_H
