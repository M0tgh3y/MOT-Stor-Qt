#include "addnewproduct.h"
#include "ui_addnewproduct.h"
#include "managerdashboard.h"
#include "global.h"
#include <cstring>

using namespace std;

addnewproduct::addnewproduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addnewproduct)
{
    ui->setupUi(this);
}

addnewproduct::~addnewproduct()
{
    delete ui;
}

void addnewproduct::on_cancel_clicked()
{
    this->close();

    managerdashboard *mWindow = new managerdashboard();
    mWindow->show();
}


void addnewproduct::on_add_clicked()
{
    QString name = ui->nameedit->text();
    int number = ui->numberedit->text().toInt();
    int price = ui->priceedit->text().toInt();

    string n = name.toStdString();
    //int num = number.toInt();
    //int prc = price.toInt();

    //addnewproduct(n, number, price);
}


