#ifndef FUNCIONARIOS_H_INCLUDED
#define FUNCIONARIOS_H_INCLUDED

#include <string>

class Funcionario{
    protected:
        std::string nome;
        int matricula;
    public:
        Funcionario();
        Funcionario(std::string, int);
        virtual ~Funcionario();

        virtual double calcularSalario() = 0;
        virtual void imp() = 0;

        std::string getNome();
        int getMatricula();

        void setNome(std::string);
        void setMatricula(int);
};


#endif // FUNCIONARIOS_H_INCLUDED
