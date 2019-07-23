#include "Empregado.h"
#include <string>
#include <iostream>

using namespace std;

Empregado::Empregado()
{
    nome = "Nome";
    sobrenome = "Sobrenome";
    salario = 0;
    //ctor
}
Empregado::Empregado(string nome, string sobrenome, float salario)
         : Empregado()
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

void Empregado::setNome(string nome)
{
    this->nome = nome;
}

void Empregado::setSobrenome(string sobrenome)
{
    this->sobrenome = sobrenome;
}

void Empregado::setSalario(float salario)
{
    if(salario<0)
    {
        cout<<"Salario invalido."<<endl;
    }else{
        this->salario = salario;
    }
}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

float Empregado::getSalario()
{
    return salario;
}
