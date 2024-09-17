#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_pushButSalir_clicked();

    void on_pushButFacIt_clicked();

    void on_pushButFacRe_clicked();

    void on_pushButEsPrimo_clicked();

    void on_pushButAND_clicked();

    void on_pushButBorrar_clicked();

    void on_pushButOR_clicked();

    void on_pushButCoIz_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
