#include "managerwindow.h"
#include <QIcon>

ManagerWindow::ManagerWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Manager Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));
    resize(400, 400);
}

// Correct the destructor to match the class name
ManagerWindow::~ManagerWindow()
{
    // Destructor implementation (if needed, you can clean up resources here)
}
