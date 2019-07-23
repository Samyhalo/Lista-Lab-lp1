#ifndef PESSOAD_H
#define PESSOAD_H
#include <iostream>
#include <string>

using namespace std;

class PessoaD
{
    public:
        PessoaD();
        PessoaD(string nome);
        PessoaD(string nome, string telefone, int idade);

        void setNome(string nome);
        void setTelefone(string telefone);
        void setIdade(int idade);

        string getNome();
        string getTelefone();
        int getIdade();

    private:
        string nome;
        string telefone;
        int idade;
};

#endif // PESSOAD_H
