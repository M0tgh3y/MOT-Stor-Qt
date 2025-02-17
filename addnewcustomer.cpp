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
    QString unameC2 = ui->useredit2->text().trimmed();
    QString upassC2 = ui->passedit2->text().trimmed();

    if (searchCname(unameC2)) {
        QMessageBox::information(this, "Error", "Your username is invalid");
    } else {
        addCname(unameC2);
        addCpass(upassC2);

        QMessageBox::information(this, "Success", "Your account has been successfully created.");
    }
}


