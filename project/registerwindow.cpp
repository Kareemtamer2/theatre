#include "registerwindow.h"
#include "ui_registerwindow.h"
#include "welcomewindow.h"
#include "users.cpp"

registerwindow::registerwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registerwindow)
{
    ui->setupUi(this);
    ui->error1->setVisible(false);
    ui->error2->setVisible(false);
    ui->error3->setVisible(false);
    ui->error4->setVisible(false);
}

registerwindow::~registerwindow()
{
    delete ui;
}

void registerwindow::on_register_but2_clicked()
{
    QString name=ui->user_line->text();
    QString pass1=ui->pass_line->text();
    QString pass2=ui->confirm_line->text();
    QString day=ui->date_line->text();
    QString year=ui->year_line->text();
    QString month=ui->month_box->currentText();
    int yea=year.toInt();
    bool man=ui->male_but->isChecked();
    bool girl=ui->female_but->isChecked();
    bool admin=ui->admin_but->isChecked();
    bool user=ui->user_but->isChecked();
    bool drama=ui->drama_but->isChecked();
    bool action=ui->action_but->isChecked();
    bool comedy=ui->comedy_but->isChecked();
    bool horror=ui->horror_but->isChecked();
    bool other=ui->other_but->isChecked();
    bool romance=ui->romance_but->isChecked();
   for (int i=0; i<usercout;i++ )
        if((usernames[i]!=name) && (pass2==pass1) && (2024-yea>12) && ((man)||(girl)) && ((user)||(admin)) && ((drama)||(action)||(comedy)||(horror)||(romance)||(other)) )
        {
            usernames[usercout]=name;
            passwords[usercout]=pass1;
            ages[usercout]=2024-yea;
            usercout++;
            hide();
            welcomewindow* welcomewindow= new class welcomewindow(this, name, 2024-yea);
            welcomewindow->show();
      }
         else
            {
                for (int i=0; i<usercout;i++ )
                {
                    if (usernames[i]==name)
                    {
                        ui->error1->setVisible(true);
                    }
                    else
                    {
                         ui->error1->setVisible(false);
                    }
                }
                if(pass2!=pass1)
                {
                    ui->error2->setVisible(true);
                }
                else
                {
                     ui->error2->setVisible(false);
                }
                if(2024-yea<12)
                {
                    ui->error3->setVisible(true);
                }
                else
                {
                     ui->error3->setVisible(false);
                }
                if((!(man)||(girl)) || (!(user)||(admin))||(!(drama)||(action)||(comedy)||(horror)||(romance)||(other)))
                {
                   ui->error4->setVisible(true);
                }
                else
                {
                    ui->error4->setVisible(false);
                }
             }
}


