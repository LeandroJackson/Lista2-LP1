#ifndef SISTEMAGERENCIAFOLHA_H_INCLUDED
#define SISTEMAGERENCIAFOLHA_H_INCLUDED

#include "Funcionarios.h"

#define FUNCIONARIO_MAX 100

class SistemaGerenciaFolha{
    private:
        Funcionario *funcionarios[FUNCIONARIO_MAX];
        int i = 0;
    public:
        SistemaGerenciaFolha();

        void setFuncionarios(Funcionario*);
        double calculaValorTotal();
        double consultaSalarioFuncionario(int);
};

#endif // SISTEMAGERENCIAFOLHA_H_INCLUDED
