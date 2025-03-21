#include "managerdashboard.h"
#include "ui_managerdashboard.h"
#include "mainwindow.h"
#include "addnewproduct.h"
#include "addnewmanager.h"
#include "showproduct.h"

managerdashboard::managerdashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::managerdashboard)
{
    ui->setupUi(this);

    setWindowTitle("Manager Dashboard");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    //resize(400, 400);
}

managerdashboard::~managerdashboard()
{
    delete ui;
}

void managerdashboard::on_back_clicked()
{
    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
    this->close();
}


void managerdashboard::on_addNPro_clicked()
{
    addnewproduct *addnewproductWindow = new addnewproduct();
    addnewproductWindow->show();
    this->close();
}


void managerdashboard::on_addNMan_clicked()
{
    addnewmanager *addnewmanWindow = new addnewmanager();
    addnewmanWindow->show();
    this->close();
}


void managerdashboard::on_showPro_clicked()
{
    showproduct *showWindow = new showproduct();
    showWindow->show();
    this->close();
}

