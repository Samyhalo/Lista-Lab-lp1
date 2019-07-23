#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#define MAX_VETOR 100
#include <string>
#include <iostream>
#include <vector>
#include "Despesa.h"

using namespace std;

class ControleDeGastos
{
    public:
        ControleDeGastos();
        ControleDeGastos(int pos, Despesa d);

        void setDespesa(Despesa d, int pos);
        float calculaTotalDespesas();
        bool existeDespesaDoTipo(string tipoGasto);

    private:
        Despesa despesas[MAX_VETOR];

};

#endif // CONTROLEDEGASTOS_H
