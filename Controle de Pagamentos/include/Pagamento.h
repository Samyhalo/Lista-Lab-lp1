#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>
#include <iostream>


using namespace std;

class Pagamento
{
    public:
        Pagamento();
        Pagamento(double valorPagamento, string nomeDofuncionario);

        void setValorPagamento(double valorPagamento);
        void setNomeDoFuncionario(string nomeDofuncionario);

        double getValorPagamento();
        string getNomeDoFuncionario();

    private:
        double valorPagamento;
        string nomeDofuncionario;
};

#endif // PAGAMENTO_H
