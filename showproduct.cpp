#include "showproduct.h"
#include "ui_showproduct.h"
#include "global.h"
#include "managerdashboard.h"

#include <QFile>
#include <QTextStream>
#include <QStringList>

showproduct::showproduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::showproduct)
{
    ui->setupUi(this);

    setWindowTitle("Show product's List");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));

    ui->tableWidget->setColumnCount(3);
    QStringList headers = {"Name", "Number", "Price"};
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->tableWidget->horizontalHeader()->setStyleSheet(
        "QHeaderView::section {"
        "    background-color: rgb(255, 255, 255);"
        "    color: black;"
        "    font-size: 12px;"
        "    padding: 5px;"
        "    border: none;"
        "}"
        );

    ui->tableWidget->verticalHeader()->setVisible(false);

    loadCSV("C:/Users/Ariyana-Soft/Desktop/Mot-Stor/Mot-Stor/product.csv");
}


showproduct::~showproduct()
{
    delete ui;
}

void showproduct::loadCSV(const QString &filename)
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

void showproduct::on_back_clicked()
{
    managerdashboard *dashboard = new managerdashboard();
    dashboard->show();
    this->close();
}

