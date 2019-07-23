#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main()
{
    Despesa *d1 = new Despesa(750, "Nokia X6");
    Despesa *d2 = new Despesa(15.50, "Combo Kdog");

    cout<<"Valor: R$"<<d1->getValor()<<" Desc: "<<d1->getTipoGasto()<<endl;
    cout<<"Valor: R$"<<d2->getValor()<<" Desc: "<<d2->getTipoGasto()<<endl;

    ControleDeGastos *c1 = new ControleDeGastos();

    c1->setDespesa(*d1, 1);
    c1->setDespesa(*d2, 2);

    cout<<"Total de despesas: R$"<<c1->calculaTotalDespesas()<<endl;

    cout<<"Existe despesa do tipo: Nokia X6? "<<c1->existeDespesaDoTipo("Nokia X6")<<endl;
    cout<<"Existe despesa do tipo: Fone JBL? "<<c1->existeDespesaDoTipo("Fone JBL")<<endl;

    delete (d1);
    delete (d2);

    return 0;
}
