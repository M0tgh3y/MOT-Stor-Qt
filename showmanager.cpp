#include "showmanager.h"
#include "ui_showmanager.h"
#include "global.h"
#include "managerdashboard.h"

#include <QFile>
#include <QTextStream>
#include <QStringList>

showmanager::showmanager(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::showmanager)
{
    ui->setupUi(this);

    setWindowTitle("Show Manager's List");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/icon/stor.png"));

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setVisible(false);
    ui->tableWidget->horizontalHeader()->setVisible(false);

    loadCSV("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/manager.csv");
}

showmanager::~showmanager()
{
    delete ui;
}

void showmanager::loadCSV(const QString &filename)
{
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return;
    }

    QTextStream in(&file);
    int row = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList cells = line.split(',');

        ui->tableWidget->insertRow(row);
        ui->tableWidget->setColumnCount(cells.size());

        for (int col = 0; col < cells.size(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(cells[col]));
        }
        row++;
    }

    file.close();
}

void showmanager::on_back_clicked()
{
    managerdashboard *dashboard = new managerdashboard();
    dashboard->show();
    this->close();
}

