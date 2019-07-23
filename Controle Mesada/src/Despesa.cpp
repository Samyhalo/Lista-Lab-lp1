#include "Despesa.h"

using namespace std;

Despesa::Despesa()
{
    valor = 0;
    tipoGasto = "ND";
    //ctor
}
Despesa::Despesa(double valor, string tipoGasto)
       : Despesa()
{
    setValor(valor);
    setTipoGasto(tipoGasto);
}

void Despesa::setValor(double valor)
{
    if(valor<0)
    {
        cout << "Valor invalido" <<  endl;
    }else{
        this->valor = valor;
    }
}

void Despesa::setTipoGasto(string tipoGasto) //tipos: debito / credito / dinheiro
{
    this->tipoGasto = tipoGasto;
}

double Despesa::getValor()
{
    return valor;
}

string Despesa::getTipoGasto()
{
    return tipoGasto;
}
