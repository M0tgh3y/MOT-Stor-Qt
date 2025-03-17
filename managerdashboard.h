#ifndef MANAGERDASHBOARD_H
#define MANAGERDASHBOARD_H

#include <QWidget>

namespace Ui {
class managerdashboard;
}

class managerdashboard : public QWidget
{
    Q_OBJECT

public:
    explicit managerdashboard(QWidget *parent = nullptr);
    ~managerdashboard();

private slots:
    void on_back_clicked();

private:
    Ui::managerdashboard *ui;
};

#endif // MANAGERDASHBOARD_H
