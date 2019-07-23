#ifndef DESPESA_H
#define DESPESA_H
#include <string>
#include <iostream>

using namespace std;

class Despesa
{
    public:
        Despesa();
        Despesa(double valor, string tipoGasto);

        void setValor(double valor);
        void setTipoGasto(string tipoGasto);

        double getValor();
        string getTipoGasto();

    private:
        double valor;
        string tipoGasto;
};

#endif // DESPESA_H
