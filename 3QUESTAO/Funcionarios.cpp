#include "Funcionarios.h"
#include <string>

using namespace std;

    Funcionario::~Funcionario(){
    //dtor
    }
    Funcionario::Funcionario(){
        nome = " ";
        matricula = 0;
    }

    void Funcionario::setNome(string n){
        nome = n;
    }
    void Funcionario::setMatricula(int m){
        if (m > 0)
            matricula = m;
        else
            matricula = 0;
    }

    std::string Funcionario::getNome(){
        return nome;
    }
    int Funcionario::getMatricula(){
        return matricula;
    }

    Funcionario::Funcionario(std::string no, int ma){
        nome = no;
        matricula = ma;
    }

