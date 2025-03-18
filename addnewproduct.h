#ifndef ADDNEWPRODUCT_H
#define ADDNEWPRODUCT_H

#include <QWidget>

namespace Ui {
class addnewproduct;
}

class addnewproduct : public QWidget
{
    Q_OBJECT

public:
    explicit addnewproduct(QWidget *parent = nullptr);
    ~addnewproduct();

private slots:

    void on_cancel_clicked();

    void on_add_clicked();

private:
    Ui::addnewproduct *ui;
};

#endif // ADDNEWPRODUCT_H
