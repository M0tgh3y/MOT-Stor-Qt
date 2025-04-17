#ifndef CUSTOMERDASHBOARD_H
#define CUSTOMERDASHBOARD_H

#include <QWidget>

namespace Ui {
class customerdashboard;
}

class customerdashboard : public QWidget
{
    Q_OBJECT

public:
    explicit customerdashboard(QWidget *parent = nullptr);
    ~customerdashboard();

private slots:
    void on_back_clicked();

    void on_addNPro_clicked();

private:
    Ui::customerdashboard *ui;
};

#endif // CUSTOMERDASHBOARD_H
