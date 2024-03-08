#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "users.h"
#include "welcomewindow.h"
#include "registerwindow.h"

loginwindow::loginwindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::loginwindow)
{
    ui->setupUi(this);
    ui->error_label->setVisible(false);

}

loginwindow::~loginwindow()
{
    delete ui;
}

void loginwindow::on_register_but_clicked()
{
    hide();
    registerwindow* registerwindow= new class registerwindow(this);
    registerwindow->show();

}


void loginwindow::on_login_but_clicked()
{
    QString name=ui->name_line->text();
    QString pass=ui->pass_line->text();
    for (int i=0; i<usercout;i++)
    {
        if((pass==passwords[i])&&(name==usernames[i]))
        {
            hide();
            welcomewindow* welcomewindow= new class welcomewindow(this, usernames[i],ages[i] );
            welcomewindow->show();
        }
        else
        {
             ui->error_label->setVisible(true);
        }
    }
}

