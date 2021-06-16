#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QFileInfo>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:


    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:

    void checkTimer();
    void Test();
   int timeCheck();
    void on_timeEditMon1_userTimeChanged(const QTime &time);

    void on_timeEditMon2_userTimeChanged(const QTime &time);

    void on_timeEditMon3_userTimeChanged(const QTime &time);

    void on_timeEditMon4_userTimeChanged(const QTime &time);


    void on_pushButton_3_clicked();

    void on_timeEditTue_1_userTimeChanged(const QTime &time);

    void on_timeEditTue_2_userTimeChanged(const QTime &time);

    void on_timeEditTue_3_userTimeChanged(const QTime &time);

    void on_timeEditTue_4_userTimeChanged(const QTime &time);

    void on_label_2_linkActivated(const QString &link);

    void on_monLink1_editingFinished();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
