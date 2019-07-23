#include "ControleDePagamentos.h"
#include "Pagamento.h"
#include <iostream>
#include <string>

using namespace std;

ControleDePagamentos::ControleDePagamentos()
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        pagamentos[i] = Pagamento();
    }
    //ctor
}
ControleDePagamentos::ControleDePagamentos(int pos, Pagamento p)
{
    setPagamentos(p, pos);
}

void ControleDePagamentos::setPagamentos(Pagamento p, int pos)
{
    pagamentos[pos].setValorPagamento(p.getValorPagamento());
    pagamentos[pos].setNomeDoFuncionario(p.getNomeDoFuncionario());
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double total=0;

    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        total += pagamentos[i].getValorPagamento();
    }
    return total;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(string nomeDoFuncionario)
{
    for(int i=0 ; i<MAX_VETOR ; i++)
    {
        if(pagamentos[i].getNomeDoFuncionario()==nomeDoFuncionario)
            return true;
    }
    return false;
}
