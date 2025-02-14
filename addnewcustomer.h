#ifndef ADDNEWCUSTOMER_H
#define ADDNEWCUSTOMER_H

#include <QWidget>

namespace Ui {
class addnewcustomer;
}

class addnewcustomer : public QWidget
{
    Q_OBJECT

public:
    explicit addnewcustomer(QWidget *parent = nullptr);
    ~addnewcustomer();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::addnewcustomer *ui;
};

#endif // ADDNEWCUSTOMER_H
