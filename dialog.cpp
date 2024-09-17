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

void Dialog::on_pushButAND_clicked()
{
    int num = ui->lineNumero->text().toInt();
    int num2 = ui->lineNumero_2->text().toInt();
    int res = (num & num2);

    QString bin1 = Matematicas::descBinario(num);
    QString bin2 = Matematicas::descBinario(num2);
    QString resBin = Matematicas::descBinario(res);

    ui->labResult->setText(QString::number(res));
    ui->labResulBin->setText(resBin);
    ui->labBin1->setText(bin1);
    ui->labBin2->setText(bin2);
}

void Dialog::on_pushButOR_clicked()
{
    int num = ui->lineNumero->text().toInt();
    int num2 = ui->lineNumero_2->text().toInt();
    int res = (num | num2);

    QString bin1 = Matematicas::descBinario(num);
    QString bin2 = Matematicas::descBinario(num2);
    QString resBin = Matematicas::descBinario(res);

    ui->labResult->setText(QString::number(res));
    ui->labResulBin->setText(resBin);
    ui->labBin1->setText(bin1);
    ui->labBin2->setText(bin2);
}


void Dialog::on_pushButBorrar_clicked()
{
    ui->labResult->clear();
    ui->labResulBin->clear();
    ui->labBin1->clear();
    ui->labBin2->clear();
    ui->lineNumero->clear();
    ui->lineNumero_2->clear();
    //ui->lineNumero->
}

void Dialog::on_pushButCoIz_clicked()
{
    int num = ui->lineNumero->text().toInt();



    int res = (num << 1);
    QString bin1 = Matematicas::descBinario(num);
    QString resBin = Matematicas::descBinario(res);

    ui->labBin1->setText(bin1);
    ui->labResulBin->setText(resBin);
    ui->labResult->setText(QString::number(res));
}
