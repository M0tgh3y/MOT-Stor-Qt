#ifndef MANAGERWINDOW_H
#define MANAGERWINDOW_H

#include <QWidget>  // Include the base QWidget class
#include <QPushButton>  // Include any specific widgets you need
#include <QLabel>  // For example, QLabel
#include <QVBoxLayout>  // Layouts to manage widget positioning

class ManagerWindow : public QWidget
{
    Q_OBJECT  // Required for Qt's signal/slot mechanism

public:
    explicit ManagerWindow(QWidget *parent = nullptr);  // Constructor
    ~ManagerWindow();  // Destructor

private:
    QPushButton *loginButton;  // Example widget
    QLabel *label;  // Example widget
};

#endif // MANAGERWINDOW_H
