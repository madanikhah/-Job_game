#ifndef COUNTRY_H
#define COUNTRY_H

#include <QDialog>
#include "income.h"
#include "job.h"

namespace Ui {
class Country;
}

class Country : public QDialog
{
    Q_OBJECT

public:
    explicit Country(QWidget *parent = 0);
    ~Country();

private slots:
    void on_pushCity1_clicked();

    void on_pushCity2_clicked();

    void on_pushCity3_clicked();

    void on_pushCity4_clicked();

    void on_pushCity5_clicked();

    void on_pushCity6_clicked();

    void on_home_clicked();

private:
    Ui::Country *ui;

    void newPageCity();
  //  void checkIncome(int,Income);
  //  void createCity();

  //  Job city[8];
};

#endif // COUNTRY_H
