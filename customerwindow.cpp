#include "customerwindow.h"
#include <QIcon>

CustomerWindow::CustomerWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Customer Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));
    resize(400, 400);
}

CustomerWindow::~CustomerWindow()
{
}
