#include "customerdashboard.h"
#include "ui_customerdashboard.h"
#include "mainwindow.h"

customerdashboard::customerdashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::customerdashboard)
{
    ui->setupUi(this);

    setWindowTitle("Customer Dashboard");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));
}

customerdashboard::~customerdashboard()
{
    delete ui;
}

void customerdashboard::on_back_clicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

