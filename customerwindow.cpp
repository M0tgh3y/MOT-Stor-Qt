#include "customerwindow.h"

CustomerWindow::CustomerWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Customer Window"); // Set the title
    resize(400, 300);  // Set the window size
}

CustomerWindow::~CustomerWindow()
{
}
