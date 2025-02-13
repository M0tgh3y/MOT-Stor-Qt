#include "managerwindow.h"
#include "ui_managerwindow.h"
#include <QIcon>
#include <QMessageBox>

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

QString nameM[] = {"mot", "ghey"};
QString passM[] = {"1383mot", "2004ghey"};

void ManagerWindow::on_ok_clicked()
{
    QString unameM = ui->useredit->text();
    QString upassM = ui->passedit->text();

    bool f = false;

    int numUsers = sizeof(nameM) / sizeof(nameM[0]);

    for (int i = 0; i < numUsers; i++) {
        if (unameM == nameM[i] && upassM == passM[i]) {
            QMessageBox::information(this, "Welcome", "Welcome " + unameM);
            f = true;
            return;
        }
    }

    if (!f) {
        QMessageBox::information(this, "Error", "Invalid username or password");
        return;
    }
}


void ManagerWindow::on_back_clicked()
{
    this->close();
}

