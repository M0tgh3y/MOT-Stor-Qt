#include "managerdashboard.h"
#include "ui_managerdashboard.h"

managerdashboard::managerdashboard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::managerdashboard)
{
    ui->setupUi(this);

    setWindowTitle("Manager Dashboard");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    resize(400, 400);
}

managerdashboard::~managerdashboard()
{
    delete ui;
}
