#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QFileInfo>
#include<popup.h>
#include<DatabaseCon.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow;
             class DatabseCon;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow,public DatabseCon
{
    Q_OBJECT


public:






    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



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

    void on_TuesTime_1_userTimeChanged(const QTime &time);

    void on_TuesSub_1_textEdited(const QString &arg1);

    void on_TuesLink_1_textEdited(const QString &arg1);

    void on_TuesTime_2_userTimeChanged(const QTime &time);

    void on_TuesSub_2_textEdited(const QString &arg1);

    void on_TuesLink_2_textEdited(const QString &arg1);

    void on_TuesTime_3_userTimeChanged(const QTime &time);

    void on_TuesSub_3_textEdited(const QString &arg1);

    void on_TuesLink_3_textEdited(const QString &arg1);

    void on_TuesTime_4_userTimeChanged(const QTime &time);

    void on_TuesSub_4_textEdited(const QString &arg1);

    void on_TuesLink_4_textEdited(const QString &arg1);

    void on_WedTime_1_userTimeChanged(const QTime &time);

    void on_WedSub_1_textEdited(const QString &arg1);

    void on_WedLink_1_textEdited(const QString &arg1);

    void on_WedTime_2_userTimeChanged(const QTime &time);

    void on_WedSub_2_textEdited(const QString &arg1);

    void on_WedLink_2_textEdited(const QString &arg1);

    void on_WedTime_3_userTimeChanged(const QTime &time);

    void on_WedSub_3_textEdited(const QString &arg1);

    void on_WedLink_3_textEdited(const QString &arg1);

    void on_WedTime_4_userTimeChanged(const QTime &time);

    void on_WedSub_4_textEdited(const QString &arg1);

    void on_WedLink_4_textEdited(const QString &arg1);

    void on_ThurTime_1_userTimeChanged(const QTime &time);

    void on_ThurSub_1_textEdited(const QString &arg1);

    void on_ThurLink_1_textEdited(const QString &arg1);

    void on_ThurTime_2_userTimeChanged(const QTime &time);

    void on_ThurSub_2_textEdited(const QString &arg1);

    void on_ThurLink_2_textEdited(const QString &arg1);

    void on_ThurTime_3_userTimeChanged(const QTime &time);

    void on_ThurSub_3_textEdited(const QString &arg1);

    void on_ThurLink_3_textEdited(const QString &arg1);

    void on_ThurTime_4_userTimeChanged(const QTime &time);

    void on_ThurSub_4_textEdited(const QString &arg1);

    void on_ThurLink_4_textEdited(const QString &arg1);

    void on_FriTime_1_userTimeChanged(const QTime &time);

    void on_FriSub_1_textEdited(const QString &arg1);

    void on_FriLink_1_textEdited(const QString &arg1);

    void on_FriTime_2_userTimeChanged(const QTime &time);

    void on_FriSub_2_textEdited(const QString &arg1);

    void on_FriLink_2_textEdited(const QString &arg1);

    void on_FriTime_3_userTimeChanged(const QTime &time);

    void on_FriSub_3_textEdited(const QString &arg1);

    void on_FriLink_3_textEdited(const QString &arg1);

    void on_FriTime_4_userTimeChanged(const QTime &time);

    void on_FriSub_4_textEdited(const QString &arg1);

    void on_FriLink_4_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
