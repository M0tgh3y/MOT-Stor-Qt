#ifndef CUSTOMERWINDOW_H
#define CUSTOMERWINDOW_H

#include <QWidget>

class CustomerWindow : public QWidget
{
    Q_OBJECT  // Required for signals/slots

public:
    explicit CustomerWindow(QWidget *parent = nullptr);
    ~CustomerWindow();
};

#endif // CUSTOMERWINDOW_H
