#ifndef ADDNEWMANAGER_H
#define ADDNEWMANAGER_H

#include <QWidget>

namespace Ui {
class addnewmanager;
}

class addnewmanager : public QWidget
{
    Q_OBJECT

public:
    explicit addnewmanager(QWidget *parent = nullptr);
    ~addnewmanager();

private slots:
    void on_back_clicked();

    void on_ok_clicked();

private:
    Ui::addnewmanager *ui;
};

#endif // ADDNEWMANAGER_H
