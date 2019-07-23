#include "ControleDeGastos.h"
#include "Despesa.h"
#include <iostream>
#include <string>

using namespace std;

ControleDeGastos::ControleDeGastos()
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        despesas[i]=Despesa();
    }
    //ctor
}

ControleDeGastos::ControleDeGastos(int pos, Despesa d)
{
    setDespesa(d,pos);
}

void ControleDeGastos::setDespesa(Despesa d, int pos)
{
    despesas[pos].setValor(d.getValor());
    despesas[pos].setTipoGasto(d.getTipoGasto());
}

float ControleDeGastos::calculaTotalDespesas()
{
    float total=0;
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        total += despesas[i].getValor();
    }
    return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipoGasto)
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        if(tipoGasto==despesas[i].getTipoGasto())
            return true;
    }
    return false;
}

