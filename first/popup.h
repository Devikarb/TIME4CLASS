#ifndef POPUP_H
#define POPUP_H

#include <QDialog>


namespace Ui {
class popUp;
}

class popUp : public QDialog
{
    Q_OBJECT

public:
    explicit popUp(QWidget *parent = nullptr);
    ~popUp();

private slots:
    void on_label_linkActivated(const QString &link);

    void on_pushButton_clicked();
    void alarm();

private:
    Ui::popUp *ui;

};

#endif // POPUP_H
