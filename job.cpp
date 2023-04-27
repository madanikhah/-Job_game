#include "job.h"
#include "ui_job.h"
#include <QTimer>
#include "onejob.h"
#include "income.h"
#include "mainwindow.h"
#include "country.h"

Income income;


Job::Job(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Job)
{
    createJob();
    timerOfJob();

    ui->setupUi(this);
}

 void Job ::setNumberOfCity(int number){

     cityNumber = number;
 }

 void Job :: luckyCard(){

     if(luckClick){
         for(int num=0;num<=(timer/50);num++){
             if(timer%3==0)
                 income.checkChange(timer/10);
             else if(timer%5==0)
                 income.checkChange(timer/8);
             else if(timer%13==0)
                 income.checkChange(timer);
             else if(timer%2==0)
                 income.checkChange(timer/12);
             else{
                 income.checkChange((timer*(-1))/10);
             }
         }}
     timer++;
     luckClick=false;
     ui->cityTimer->setText(QString::number(timer));
 }

void Job :: timerOfJob(){

    QTimer *timer = new QTimer(this);
    timer->setInterval(1000);
    timer->start();
    connect(timer,SIGNAL(timeout()),
    SLOT(updateClock()));

}

Job::~Job()
{
    delete ui;
}

OneJob job[8];

void Job :: createJob(){
    //OneJob *job[number] = new OneJob();
    for(int number=0; number<8;number++){
        job[number].setNumber(number);
    }
}

void Job :: showLevel(){

    ui->Level1->setText(QString::number(job[0].jobLevel().level));
    ui->Level2->setText(QString::number(job[1].jobLevel().level));
    ui->Level3->setText(QString::number(job[2].jobLevel().level));
    ui->Level4->setText(QString::number(job[3].jobLevel().level));
    ui->Level5->setText(QString::number(job[4].jobLevel().level));
    ui->Level6->setText(QString::number(job[5].jobLevel().level));
    ui->Level7->setText(QString::number(job[6].jobLevel().level));
    ui->Level8->setText(QString::number(job[7].jobLevel().level));
}

void Job :: showTime(){

    for(int number=0;number<8;number++){

        if(job[number].sw && job[number].time>=0){

            if(number==0)
                ui->timer1->setText(QString::number(job[number].time));
            else if(number==1)
                ui->timer2->setText(QString::number(job[number].time));
            else if(number==2)
                ui->timer3->setText(QString::number(job[number].time));
            else if(number==3)
                ui->timer4->setText(QString::number(job[number].time));
            else if(number==4)
                ui->timer5->setText(QString::number(job[number].time));
            else if(number==5)
                ui->timer6->setText(QString::number(job[number].time));
            else if(number==6)
                ui->timer7->setText(QString::number(job[number].time));
            else if(number==7)
                ui->timer8->setText(QString::number(job[number].time));

            job[number].time--;

        }
    }
}

void Job :: changeIncome(){

    for(int number=0;number<8;number++){

        if(job[number].sw &&  job[number].time==-1)
        {
            job[number].sw= false;
            job[number].time= 10;
            income.checkChange(job[number].jobIncome());
            ui->coins->setText(QString::number(income.coins()));

            job[number].oneJobIncome.checkChange(job[number].jobIncome());
        }
    }

}

void Job :: showIncomes(){

     ui->income1->setText(QString::number(job[0].oneJobIncome.coins()));
     ui->income2->setText(QString::number(job[1].oneJobIncome.coins()));
     ui->income3->setText(QString::number(job[2].oneJobIncome.coins()));
     ui->income4->setText(QString::number(job[3].oneJobIncome.coins()));
     ui->income5->setText(QString::number(job[4].oneJobIncome.coins()));
     ui->income6->setText(QString::number(job[5].oneJobIncome.coins()));
     ui->income7->setText(QString::number(job[6].oneJobIncome.coins()));
     ui->income8->setText(QString::number(job[7].oneJobIncome.coins()));
}

void Job :: showScoreAndJobAct(int number){

    if( job[number].setJobAct(income)){
        score++;
        ui->score->setText(QString::number(score));
    }

}

void Job :: showScoreAndUpAct(int number){

    income=job[number].setActUp(income);
    if(job[number].effectiveClickUp()){
        score++;
        ui->score->setText(QString::number(score));
    }
    ui->coins->setText(QString::number(income.coins()));
    if(number==0)
        ui->coinsToUp1->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==1)
        ui->coinsToUp2->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==2)
        ui->coinsToUp3->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==3)
        ui->coinsToUp4->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==4)
        ui->coinsToUp5->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==5)
        ui->coinsToUp6->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==6)
        ui->coinsToUp7->setText(QString::number(job[number].coinToIncreaseJobLevel()));
    else if(number==7)
        ui->coinsToUp8->setText(QString::number(job[number].coinToIncreaseJobLevel()));
}


void Job:: updateClock(){

    showLevel();
    showTime();
    changeIncome();
    showIncomes();
    luckyCard();
}

void Job::on_pushButton_clicked(){}

void Job::on_PushJob1_clicked()
{
    showScoreAndJobAct(0);
}

void Job::on_PushJob2_clicked()
{
    showScoreAndJobAct(1);
}

void Job::on_PushJob3_clicked()
{
    showScoreAndJobAct(2);
}

void Job::on_PushJob4_clicked()
{
    showScoreAndJobAct(3);
}

void Job::on_PushJob5_clicked()
{
    showScoreAndJobAct(4);
}

void Job::on_PushJob6_clicked()
{
    showScoreAndJobAct(5);
}

void Job::on_PushJob7_clicked()
{
    showScoreAndJobAct(6);
}

void Job::on_PushJob8_clicked()
{
    showScoreAndJobAct(7);
}

//از اینجا اضافه اس ولی پاک نمیشه
void Job::on_Level1_clicked()
{}
void Job::on_Level2_clicked()
{}
void Job::on_Level3_clicked()
{}
void Job::on_Level4_clicked()
{}
void Job::on_Level5_clicked()
{}
void Job::on_Level6_clicked()
{}
void Job::on_Level7_clicked()
{}
void Job::on_Level8_clicked()
{}
void Job::on_Job_accepted()
{}
void Job::on_PushLevel1_clicked()
{}
//تا اینجا اضافه اس ولی پاک نمیشه


void Job::on_pushUp1_clicked()
{
    showScoreAndUpAct(0);
    /*
    income=job[0].setActUp(income);
    if(job[0].effectiveClickUp()){
        score++;
        ui->score->setText(QString::number(score));
    }
    ui->coins->setText(QString::number(income.coins()));
    ui->coinsToUp1->setText(QString::number(job[0].coinToIncreaseJobLevel()));*/
}

void Job::on_pushUp2_clicked()
{
    showScoreAndUpAct(1);
}

void Job::on_pushUp3_clicked()
{
    showScoreAndUpAct(2);
}

void Job::on_pushUp4_clicked()
{
     showScoreAndUpAct(3);
}

void Job::on_pushUp5_clicked()
{
     showScoreAndUpAct(4);
}

void Job::on_pushUp6_clicked()
{
     showScoreAndUpAct(5);
}

void Job::on_pushUp7_clicked()
{
     showScoreAndUpAct(6);
}

void Job::on_pushUp8_clicked()
{
     showScoreAndUpAct(7);
}

void Job::on_home_clicked()
{
    MainWindow *home = new MainWindow();
    home->show();
}

void Job::on_back_clicked()
{
    Country *country = new Country();
    country->show();
}

void Job::on_UpCity_clicked()
{
    int number=0;
    while(job[number].oneJobIncome.coins()!=0 && number<8){
        if(number==7 && income.checkChange(levelOfCity.level*(-10))){

           levelOfCity.increaseLevel();
        }
        number++;
    }
     ui->levelOfCity->setText(QString::number(levelOfCity.level));
}

void Job::on_pushLuck_clicked()
{
    luckClick=true;
}
