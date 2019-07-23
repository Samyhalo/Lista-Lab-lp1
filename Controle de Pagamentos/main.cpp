#include <iostream>
#include <string>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

using namespace std;

int main()
{
    Pagamento *p1 = new Pagamento(1350, "Sam Albuquerque");
    Pagamento *p2 = new Pagamento(800, "Eduardo Marcelo");

    cout<<"Funcionario: "<<p1->getNomeDoFuncionario()<<"Pagamento: "<<p1->getValorPagamento()<<endl;
    cout<<"Funcionario: "<<p2->getNomeDoFuncionario()<<"Pagamento: "<<p2->getValorPagamento()<<endl;

    ControleDePagamentos *c1 = new ControleDePagamentos();

    c1->setPagamentos(*p1, 1);
    c1->setPagamentos(*p2, 2);

    cout<<"Total em pagamentos: R$"<<c1->calculaTotalDePagamentos()<<endl;

    cout<<"Existe pagamento para o funcionario Sam Albuquerque?"<<c1->existePagamentoParaFuncionario("Sam Albuquerque")<<endl;
    cout<<"Existe pagamento para o funcionario Ciclano de tal?"<<c1->existePagamentoParaFuncionario("Ciclano de tal")<<endl;

    delete(p1);
    delete(p2);

    return 0;
}
