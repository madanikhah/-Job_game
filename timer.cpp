#include "timer.h"
#include <QTimer>

//bool sw=false;
//int timer=10;

Timer::Timer(){
/*    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    connect(timer,SIGNAL(timeout()),
    SLOT(updateClock()));*/
}
void Timer:: timer(){

}

void Timer:: updateClock(){

 /*   if(sw && timer>0){
        timer--;
        ui->Level1->setText(QString::number(timer));
    }
    else if(sw && timer==0)
    {
         ui->Level1->setText(QString::number(timer-5));
      sw=false;
    }
*/
}


/*

JobPage::JobPage(QWidget *parent) :
    //QWidget(parent),
    ui(new Ui::JobPage)
{
    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    connect(timer,SIGNAL(timeout()),
    SLOT(updateClock()));

    ui->setupUi(this);
}

JobPage::~JobPage()
{
    delete ui;
}

void JobPage::on_pushButton_17_clicked()
{
    HomePage *dialog = new HomePage();
    dialog->show();
}

void JobPage::on_pushButton_clicked()
{
    sw=1;
    timer1=timespeed;
     ui->label_2->setText(QString::number(timer1));}


void JobPage::updateClock(){

    if(sw==1 && timer1>0){

        timer1--;
        ui->label_2->setText(QString::number(timer1));}
    else if(timer1==0 && sw ==1)
    {
        money+=up;
        ui->label->setText(QString::number(money));
        sw=0;
    }

}
void JobPage::on_pushButton_9_clicked()
{
   if(money > 2){
    timespeed--;
    up ++;
    money -= up ;
     ui->label->setText(QString::number(money));
   }


}*/
