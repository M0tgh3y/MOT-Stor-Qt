#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "customerwindow.h"
#include "managerwindow.h"
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle("MOT STOR");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/icon/stor.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_manager_clicked()
{
    ManagerWindow *managerWin = new ManagerWindow();
    managerWin->show();
    this->close();
}


void MainWindow::on_customer_clicked()
{
    CustomerWindow *customerWin = new CustomerWindow();
    customerWin->show();
    this->close();
}

