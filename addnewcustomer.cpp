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

    connect(ui->add, SIGNAL(clicked(bool)), this, SLOT(on_add_clicked()), Qt::UniqueConnection);
}

addnewcustomer::~addnewcustomer()
{
    delete ui;
}

void addnewcustomer::on_pushButton_2_clicked()
{
    this->close();
    CustomerWindow *customerWin = new CustomerWindow();
    customerWin->show();
}


void addnewcustomer::on_add_clicked()
{

}


