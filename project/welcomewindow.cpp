#include "welcomewindow.h"
#include "ui_welcomewindow.h"
#include "QPixmap"

welcomewindow::welcomewindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::welcomewindow)
{
    ui->setupUi(this);
    QPixmap pix("/Users/deadender/Desktop/csce 2/csce 2 lab/welcome_cinema.jpeg");
    int w =ui->pic_label->width();
    int h =ui->pic_label->height();
    ui->pic_label->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

welcomewindow::~welcomewindow()
{
    delete ui;
}
