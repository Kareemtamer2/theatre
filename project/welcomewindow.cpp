#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "loginwindow.h"
#include "QPixmap"

welcomewindow::welcomewindow(QWidget *parent, QString name, int age)
    : QDialog(parent)
    , ui(new Ui::welcomewindow)
{
    ui->setupUi(this);
    QString str= QString::number (age) ;
    ui->user_welcome->setText("Welcome "+name+" "+str);
    QPixmap pix("/Users/deadender/Desktop/csce 2/csce 2 lab/welcome_cinema.jpeg");
    ui->pic_label->setPixmap(pix.scaled(550,400, Qt::KeepAspectRatio));

}

welcomewindow::~welcomewindow()
{
    delete ui;
}

void welcomewindow::on_logout_but_clicked()
{
    hide();
    loginwindow* loginwindow= new class loginwindow(this);
    loginwindow->show();

}

