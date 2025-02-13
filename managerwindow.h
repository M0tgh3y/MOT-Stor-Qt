#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QWidget>
#include "ui_managerwindow.h"

class ManagerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerWindow(QWidget *parent = nullptr);
    ~ManagerWindow();

private slots:

    void on_ok_clicked();

    void on_back_clicked();

private:
    Ui::managerwindow *ui;
};

#endif // MANAGERWINDOW_H
