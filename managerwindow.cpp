#include "managerwindow.h"
#include "ui_managerwindow.h"
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

std::vector<QString> nameM = {"mot", "ghey"};  // Vector of usernames
std::vector<QString> passM = {"1383mot", "2004ghey"};  // Vector of passwords

void ManagerWindow::on_ok_clicked()
{
    QString unameM = ui->useredit->text();  // Get username input
    QString upassM = ui->passedit->text();  // Get password input

    bool f = false;

    // Loop through the vectors to find matching username and password
    for (size_t i = 0; i < nameM.size(); i++) {
        if (unameM == nameM[i] && upassM == passM[i]) {
            QMessageBox::information(this, "Welcome", "Welcome " + unameM);
            f = true;
            return;
        }
    }

    // If username or password is not found, show an error message
    if (!f) {
        QMessageBox::information(this, "Error", "Invalid username or password");
        return;
    }
}


void ManagerWindow::on_back_clicked()
{
    this->close();

    MainWindow *mainWindow = new MainWindow();
    mainWindow->show();
}

