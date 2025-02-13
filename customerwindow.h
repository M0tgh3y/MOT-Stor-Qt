#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QWidget>
#include "ui_customerwindow.h"

class CustomerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerWindow(QWidget *parent = nullptr);
    ~CustomerWindow();

private slots:

    void on_ok_clicked();

    void on_back_clicked();

private:
    Ui::customerwindow *ui;
};

#endif // CUSTOMERWINDOW_H
