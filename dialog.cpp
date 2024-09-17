#include "dialog.h"
#include "ui_dialog.h"
#include "matematicas.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButSalir_clicked()
{
    close();
}


void Dialog::on_pushButFacIt_clicked()
{
    int num = ui->lineNumero->text().toInt();

    unsigned long long res = Matematicas::facIter(num);

    ui->labResult->setText(QString::number(res));
}


void Dialog::on_pushButFacRe_clicked()
{
    int num = ui->lineNumero->text().toInt();

    unsigned long long res = Matematicas::facRec(num);
    ui->labResult->setText(QString::number(res));
}


void Dialog::on_pushButEsPrimo_clicked()
{
    int num = ui->lineNumero->text().toInt();
    QString res = (Matematicas::esPrimo(num) == 1) ? "Es Primo" : "No es Primo";
    ui->labResult->setText(res);
}


