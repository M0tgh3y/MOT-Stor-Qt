#include "customerwindow.h"
#include "ui_customerwindow.h"
#include <QIcon>
#include <QMessageBox>

CustomerWindow::CustomerWindow(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::customerwindow)
{
    ui->setupUi(this);


    setWindowTitle("Customer Login");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    connect(ui->ok, SIGNAL(clicked(bool)), this, SLOT(on_ok_clicked()), Qt::UniqueConnection);

    resize(400, 400);
}

CustomerWindow::~CustomerWindow()
{
    delete ui;
}

QString nameC[] = {"mot", "ghey"};
QString passC[] = {"1383mot", "2004ghey"};

void CustomerWindow::on_ok_clicked()
{
    QString unameC = ui->useredit->text();
    QString upassC = ui->passedit->text();

    bool f = false;

    int numUsers = sizeof(nameC) / sizeof(nameC[0]);

    for (int i = 0; i < numUsers; i++) {
        if (unameC == nameC[i] && upassC == passC[i]) {
            QMessageBox::information(this, "Welcome", "Welcome " + unameC);
            f = true;
            return;
        }
    }

    if (!f) {
        QMessageBox::information(this, "Error", "Invalid username or password");
        return;
    }
}

void CustomerWindow::on_back_clicked()
{
    this->close();
}

