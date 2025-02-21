#include "managerwindow.h"
#include "ui_managerwindow.h"
#include "global.h"
#include "mainwindow.h"
#include <QIcon>
#include <QMessageBox>
#include <vector>

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


    addmanager(unameM, upassM);
    checkmanager(unameM, upassM);
}


void ManagerWindow::on_back_clicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

