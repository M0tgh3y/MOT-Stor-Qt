#include "addnewmanager.h"
#include "ui_addnewmanager.h"
#include "managerdashboard.h"
#include "global.h"

addnewmanager::addnewmanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addnewmanager)
{
    ui->setupUi(this);

    setWindowTitle("Manager Dashboard");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));
}

addnewmanager::~addnewmanager()
{
    delete ui;
}

void addnewmanager::on_back_clicked()
{
    managerdashboard *dashboard = new managerdashboard();
    dashboard->show();
    this->close();
}


void addnewmanager::on_ok_clicked()
{
    QString unameM = ui->useredit->text();
    QString upassM = ui->passedit->text();

    string U = unameM.toStdString();
    string P = upassM.toStdString();

    addmanager(U, P);
}

