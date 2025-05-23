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

    void on_addNPro_clicked();

    void on_addNMan_clicked();

    void on_showPro_clicked();

    void on_showMan_clicked();

private:
    Ui::managerdashboard *ui;
};

#endif // MANAGERDASHBOARD_H
