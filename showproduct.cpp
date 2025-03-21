#include "showproduct.h"
#include "ui_showproduct.h"

showproduct::showproduct(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::showproduct)
{
    ui->setupUi(this);

    setWindowTitle("Show product's List");
    setWindowIcon(QIcon("C:/Users/Ariyana-Soft/Downloads/icons8-store-50.png"));
}

showproduct::~showproduct()
{
    delete ui;
}
