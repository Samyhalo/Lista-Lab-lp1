#include "Pagamento.h"

using namespace std;

Pagamento::Pagamento()
{
    valorPagamento = 0;
    nomeDofuncionario = "ND";
    //ctor
}

Pagamento::Pagamento(double valorPagamento, string nomeDofuncionario)
         : Pagamento()
{
    setValorPagamento(valorPagamento);
    setNomeDoFuncionario(nomeDofuncionario);
}

void Pagamento::setValorPagamento(double valorPagamento)
{
    if(valorPagamento<0)
    {
        cout<<"Valor invalido."<<endl;
    }else{
    this->valorPagamento = valorPagamento;
    }
}

void Pagamento::setNomeDoFuncionario(string nomeDofuncionario)
{
    this->nomeDofuncionario = nomeDofuncionario;
}

double Pagamento::getValorPagamento()
{
    return valorPagamento;
}

string Pagamento::getNomeDoFuncionario()
{
    return nomeDofuncionario;
}
