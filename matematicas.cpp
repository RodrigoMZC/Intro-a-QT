#include "matematicas.h"

Matematicas::Matematicas() {


}


unsigned long long Matematicas::facIter(int num)
{
    unsigned long long res = 1;

    if (num == 0 || num == 1){

        return res;
    }
    for (int i = 1; i <= num; i++) {
        res *= i;
    }
    return res;
};

unsigned long long Matematicas::facRec(int num)
{
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * facRec(num - 1);
    }

}

int Matematicas::esPrimo(int num)
{
    int aux = 0;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0){
            aux++;
        }
    }
    return aux;
}

QString Matematicas::descBinario(int num)
{
    QString bin = QString::number(num,2);
    while (bin.length() < 32) {
        bin.prepend('0');
    }
    return bin;
}




























