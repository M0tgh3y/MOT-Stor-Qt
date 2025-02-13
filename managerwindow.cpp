#include "managerwindow.h"

ManagerWindow::ManagerWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Manager Window"); // Set title for the new window
    resize(400, 300);  // Set size of the window
}

ManagerWindow::~ManagerWindow()
{
}
