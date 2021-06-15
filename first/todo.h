#ifndef TODO_H
#define TODO_H

#include <QMainWindow>

namespace Ui {
class Todo;
}

class Todo : public QMainWindow
{
    Q_OBJECT

public:
    explicit Todo(QWidget *parent = nullptr);
    ~Todo();

private:
    Ui::Todo *ui;
};

#endif // TODO_H
