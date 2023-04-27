#ifndef JOB_H
#define JOB_H

#include <QDialog>
#include "level.h"

namespace Ui {
class Job;
}

class Job : public QDialog
{
    Q_OBJECT

public:
    explicit Job(QWidget *parent = 0);
    ~Job();

    void setNumberOfCity(int);

 private:
    void timerOfJob();
    void showLevel();
    void showTime();
    void changeIncome();
    void createJob();
    void showIncomes();
    int score=0;
    void showScoreAndJobAct(int);
    void showScoreAndUpAct(int);
    Level levelOfCity;
    int cityNumber=0;
    void luckyCard();
    int timer=0;
    bool luckClick=false;

private slots:
    void updateClock();
    void on_pushButton_clicked();

    void on_PushJob1_clicked();

    void on_PushJob3_clicked();

    void on_PushJob4_clicked();

    void on_PushJob5_clicked();

    void on_PushJob6_clicked();

    void on_PushJob2_clicked();

    void on_PushJob7_clicked();

    void on_PushJob8_clicked();

    void on_Level1_clicked();

    void on_Level2_clicked();

    void on_Level3_clicked();

    void on_Level4_clicked();

    void on_Level5_clicked();

    void on_Level6_clicked();

    void on_Level7_clicked();

    void on_Level8_clicked();

    void on_Job_accepted();

    void on_PushLevel1_clicked();

    void on_pushUp1_clicked();

    void on_pushUp2_clicked();

    void on_pushUp3_clicked();

    void on_pushUp4_clicked();

    void on_pushUp5_clicked();

    void on_pushUp6_clicked();

    void on_pushUp7_clicked();

    void on_pushUp8_clicked();

    void on_home_clicked();

    void on_back_clicked();

    void on_UpCity_clicked();

    void on_pushLuck_clicked();

private:
    Ui::Job *ui;
};

#endif // JOB_H
