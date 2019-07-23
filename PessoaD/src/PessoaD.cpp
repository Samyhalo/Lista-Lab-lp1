#include "PessoaD.h"
#include <string>
#include <iostream>

using namespace std;

PessoaD::PessoaD()
{
    nome = "vazio";
    telefone = "000000000";
    idade = 0;
    //ctor
}


PessoaD::PessoaD(string nome, string telefone, int idade)
       : PessoaD()
{
    setNome(nome);
    setTelefone(telefone);
    setIdade(idade);
}

void PessoaD::setNome(string nome)
{
    this->nome = nome;
}

void PessoaD::setTelefone(string telefone)
{
    this->telefone = telefone;
}

void PessoaD::setIdade(int idade)
{
    if(idade<0)
    {
        cout<<"Idade invalida."<<endl;
    }else{
    this->idade = idade;
    }
}

string PessoaD::getNome()
{
    return nome;
}

string PessoaD::getTelefone()
{
    return telefone;
}

int PessoaD::getIdade()
{
    return idade;
}
