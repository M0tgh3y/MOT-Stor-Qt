#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QWidget>

class ManagerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ManagerWindow(QWidget *parent = nullptr);
    ~ManagerWindow();
};

#endif // MANAGERWINDOW_H
