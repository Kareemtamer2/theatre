#ifndef WELCOMEWINDOW_H
#define WELCOMEWINDOW_H

#include <QDialog>

namespace Ui {
class welcomewindow;
}

class welcomewindow : public QDialog
{
    Q_OBJECT

public:
    explicit welcomewindow(QWidget *parent = nullptr,QString name="", int age=0);
    ~welcomewindow();

private slots:
    void on_logout_but_clicked();

private:
    Ui::welcomewindow *ui;
};

#endif // WELCOMEWINDOW_H
