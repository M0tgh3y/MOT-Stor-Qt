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

private:
    Ui::customerwindow *ui;
};

#endif // CUSTOMERWINDOW_H
