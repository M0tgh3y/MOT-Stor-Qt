#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "global.h"
#include "mainwindow.h"
#include "managerdashboard.h"
#include <QIcon>
#include <QMessageBox>
#include <vector>
#include <cstring>

ManagerWindow::ManagerWindow(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::managerwindow)
{
    ui->setupUi(this);

    setWindowTitle("Manager Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    connect(ui->ok, SIGNAL(clicked(bool)), this, SLOT(on_ok_clicked()), Qt::UniqueConnection);

    resize(400, 400);

}

ManagerWindow::~ManagerWindow()
{
    delete ui;
}



void ManagerWindow::on_ok_clicked()
{
    QString unameM = ui->useredit->text();
    QString upassM = ui->passedit->text();

    string U = unameM.toStdString();
    string P = upassM.toStdString();

    if (checkmanager(U, P)) {
        managerdashboard *dashboard = new managerdashboard();
        dashboard->show();
        this->close();
        //QMessageBox::information(this, "Login Success", "You have successfully logged in.");

    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password!");
    }
}



void ManagerWindow::on_back_clicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

