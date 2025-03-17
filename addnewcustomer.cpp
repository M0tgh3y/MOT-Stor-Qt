#include "addnewcustomer.h"
#include "ui_addnewcustomer.h"
#include "customerwindow.h"
#include "global.h"
#include <QMessageBox>

addnewcustomer::addnewcustomer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addnewcustomer)
{
    ui->setupUi(this);

    setWindowTitle("Add New Customer");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    connect(ui->add, &QPushButton::clicked, this, &addnewcustomer::on_add_clicked);
}

addnewcustomer::~addnewcustomer()
{
    delete ui;
}

void addnewcustomer::on_back_clicked()
{
    this->close();
    CustomerWindow *customerWin = new CustomerWindow();
    customerWin->show();
}


void addnewcustomer::on_add_clicked()
{
    QString unamecus = ui->useredit->text();
    QString passcus = ui->passedit->text();
    QString fname = ui->firstnameedit->text();
    QString lastnamec = ui->lastnameedit->text();

    string U = unamecus.toStdString();
    string P = passcus.toStdString();
    string name = fname.toStdString();
    string lastname = lastnamec.toStdString();

    addNewCustomer(U, P, name, lastname);
}


