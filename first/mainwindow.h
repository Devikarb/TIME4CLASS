#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>
#include<popup.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:






    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
 void load();


private slots:

    //void checkTimer();

void addTime(QTime Time,int no);
void Addlink(QString link,int no);
void AddSub(QString Sub,int no);
   //int timeCheck();










    void on_MonTime_1_userTimeChanged(const QTime &time);

    void on_MonSub_1_textEdited(const QString &arg1);

    void on_MonLink_1_textEdited(const QString &arg1);

    void on_MonTime_2_userTimeChanged(const QTime &time);

    void on_MonSub_2_textEdited(const QString &arg1);

    void on_MonLink_2_textEdited(const QString &arg1);

    void on_MonTime_3_userTimeChanged(const QTime &time);

    void on_MonSub_3_textEdited(const QString &arg1);

    void on_MonLink_3_textEdited(const QString &arg1);

    void on_MonTime_4_userTimeChanged(const QTime &time);

    void on_MonSub_4_textEdited(const QString &arg1);

    void on_MonLink_4_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
