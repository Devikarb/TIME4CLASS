#ifndef DATABASECON_H
#define DATABASECON_H
#include <QMainWindow>
#include <QtSql>


namespace Ui {
class Menu;
}
class DatabseCon
{


public:
QSqlDatabase mydb;
    void cnnClose() //funtion  close the connection
    { QSqlDatabase mydb;// creating sqlit object
      mydb.close();
      mydb.removeDatabase(QSqlDatabase::defaultConnection);

    }
    bool connOpen()// to add database connection
    {
        QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE");
        mydb.setDatabaseName("C:\\sqlite\\sqlite-tools-win32-x86-3350500\\Time4Class.db");




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


};

#endif // DATABASECON_H
