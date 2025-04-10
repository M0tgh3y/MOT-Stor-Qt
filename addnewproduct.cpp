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
    setWindowTitle("Add a Product");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/icon/stor.png"));
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
    QString number = ui->numberedit->text();
    QString price = ui->priceedit->text();

    string n = name.toStdString();
    string num = number.toStdString();
    string prc = price.toStdString();

    int nn = stoi(num);
    int pp = stoi(prc);

    addNewProductM(n, nn, pp);
}


