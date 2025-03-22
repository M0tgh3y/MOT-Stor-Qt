#include "showproduct.h"
#include "ui_showproduct.h"
#include "global.h"

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
        return; // Handle error if the file can't be opened
    }

    QTextStream in(&file);
    int row = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList cells = line.split(',');

        ui->tableWidget->insertRow(row);  // Add a new row
        ui->tableWidget->setColumnCount(cells.size()); // Adjust columns dynamically

        for (int col = 0; col < cells.size(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(cells[col]));
        }
        row++;
    }

    file.close();
}
