#include "managerwindow.h"
#include "ui_managerwindow.h"
#include <QIcon>

ManagerWindow::ManagerWindow(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::managerwindow)
{
    ui->setupUi(this);

    setWindowTitle("Manager Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    resize(400, 400);

}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}
