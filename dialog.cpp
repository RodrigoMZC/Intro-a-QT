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
    QString bin1 = Matematicas::descBinario(num);

    ui->labResult->setText(QString::number(res));
    ui->labBin1->setText(bin1);
}


void Dialog::on_pushButFacRe_clicked()
{
    int num = ui->lineNumero->text().toInt();

    unsigned long long res = Matematicas::facRec(num);
    QString bin1 = Matematicas::descBinario(num);

    ui->labResult->setText(QString::number(res));
    ui->labBin1->setText(bin1);
}


void Dialog::on_pushButEsPrimo_clicked()
{
    int num = ui->lineNumero->text().toInt();
    QString res = (Matematicas::esPrimo(num) == 1) ? "Es Primo" : "No es Primo";
    QString bin1 = Matematicas::descBinario(num);

    ui->labResult->setText(res);
    ui->labBin1->setText(bin1);
}
