#ifndef SHOWPRODUCT_H
#define SHOWPRODUCT_H

#include <QWidget>

namespace Ui {
class showproduct;
}

class showproduct : public QWidget
{
    Q_OBJECT

public:
    explicit showproduct(QWidget *parent = nullptr);
    ~showproduct();

private:
    Ui::showproduct *ui;
};

#endif // SHOWPRODUCT_H
