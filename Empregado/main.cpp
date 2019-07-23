#include <iostream>
#include "Empregado.h"
#include <string>

using namespace std;

int main()
{
    Empregado test1 = Empregado("Joao", "Victor", 1500);
    Empregado test2 = Empregado("Maria", "Eduarda", 4000);

    cout<<"Empregado: "<<test1.getNome()<<" "<<test1.getSobrenome()<<". Salario: R$"<<test1.getSalario()<<endl;
    cout<<"Empregado: "<<test2.getNome()<<" "<<test2.getSobrenome()<<". Salario: R$"<<test2.getSalario()<<endl;

    test1.setSalario(-40);

    cout<<"Empregado: "<<test1.getNome()<<" "<<test1.getSobrenome()<<". Salario: R$"<<test1.getSalario()<<endl;

    return 0;
}
