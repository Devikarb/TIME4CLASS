#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include<MainWindow.h>
#include<todo.h>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:


    explicit Menu(QWidget *parent = nullptr);
    ~Menu();


private slots:


    //int senddata( );
    void Test();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_label_linkActivated(const QString &link);

private:
    Ui::Menu *ui;
    MainWindow *mainWindow;
    Todo *todo;

};

#endif // MENU_H
