#include "customerwindow.h"
#include "ui_customerwindow.h"
#include "addnewcustomer.h"
#include "mainwindow.h"
#include "global.h"
#include <QIcon>
#include <QMessageBox>
#include <vector>


CustomerWindow::CustomerWindow(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::customerwindow)
{
    ui->setupUi(this);


    setWindowTitle("Customer Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    connect(ui->ok, SIGNAL(clicked(bool)), this, SLOT(on_ok_clicked()), Qt::UniqueConnection);

    resize(400, 400);
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

void CustomerWindow::on_ok_clicked() {

}


void CustomerWindow::on_back_clicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}


void CustomerWindow::on_pushButton_clicked()
{
    addnewcustomer *addNewCustomerWindow = new addnewcustomer();
    addNewCustomerWindow->show();
    this->close();
}

