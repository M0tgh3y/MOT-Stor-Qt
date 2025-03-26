#ifndef SHOWMANAGER_H
#define SHOWMANAGER_H

#include <QWidget>

namespace Ui {
class showmanager;
}

class showmanager : public QWidget
{
    Q_OBJECT

public:
    explicit showmanager(QWidget *parent = nullptr);
    ~showmanager();

private slots:
    void on_back_clicked();

private:
    Ui::showmanager *ui;
    void loadCSV(const QString &manager);
};

#endif // SHOWMANAGER_H
