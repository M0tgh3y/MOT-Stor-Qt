#include "customerwindow.h"
#include "ui_customerwindow.h"  // Include the auto-generated UI header file
#include <QIcon>

CustomerWindow::CustomerWindow(QWidget *parent)
    : QWidget(parent),  // Initialize the parent class
    ui(new Ui::customerwindow)  // Initialize the UI object
{
    ui->setupUi(this);  // Set up the UI components from the .ui file

    // Set window title and icon
    setWindowTitle("Customer Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    resize(400, 400);  // Resize the window as needed
}

CustomerWindow::~CustomerWindow()
{
    delete ui;  // Clean up the UI object
}
