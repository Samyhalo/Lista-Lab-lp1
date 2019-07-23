#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>
#include <iostream>

using namespace std;

class Empregado
{
    public:
        Empregado();
        Empregado(string nome, string sobrenome, float salario);

        void setNome(string nome);
        void setSobrenome(string sobrenome);
        void setSalario(float salario);

        string getNome();
        string getSobrenome();
        float getSalario();

    private:
        string nome;
        string sobrenome;
        float salario;
};

#endif // EMPREGADO_H
