#include "country.h"
#include "ui_country.h"
#include "job.h"
#include "income.h"
#include "mainwindow.h"


Country::Country(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Country)
{
    //createCity();
    ui->setupUi(this);
}

Country::~Country()
{
    delete ui;
}

//Job city[6];

/*void Country :: createCity(){
    //OneJob *job[number] = new OneJob();
    for(int number=0; number<6;number++){
        city[number].setNumberOfCity(number);
    }
}*/

void Country :: newPageCity(){
    Job *job = new Job();
    job->show();
}

/*void Country :: checkIncome(int number, Income incomes){
    if(incomes.coins()<(number*100))
        newPageCity();
}*/

void Country::on_pushCity1_clicked()
{
newPageCity();
}

void Country::on_pushCity2_clicked()
{
    //checkIncome(ci
newPageCity();
}

void Country::on_pushCity3_clicked()
{
newPageCity();
}

void Country::on_pushCity4_clicked()
{
newPageCity();
}

void Country::on_pushCity5_clicked()
{
newPageCity();
}

void Country::on_pushCity6_clicked()
{
newPageCity();
}

void Country::on_home_clicked()
{
    MainWindow *home = new MainWindow();
    home->show();
}
