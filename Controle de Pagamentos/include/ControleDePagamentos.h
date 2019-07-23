#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#define MAX_VETOR 100
#include <string>
#include <iostream>
#include "Pagamento.h"

using namespace std;

class ControleDePagamentos
{
    public:
        ControleDePagamentos();
        ControleDePagamentos(int pos, Pagamento p);

        void setPagamentos(Pagamento p, int pos);
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(string nomeDoFuncionario);

    private:
        Pagamento pagamentos[MAX_VETOR];
};

#endif // CONTROLEDEPAGAMENTOS_H
