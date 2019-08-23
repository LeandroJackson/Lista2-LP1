#include "SistemaGerenciaFolha.h"
#include <iostream>

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(){
}

    void SistemaGerenciaFolha::setFuncionarios(Funcionario* func){
        funcionarios[i] = func;
        i++;
    }

double SistemaGerenciaFolha::calculaValorTotal(){
    double
        valorTotal = 0;

    for (int i = 0; i < FUNCIONARIO_MAX; i++){
        valorTotal += funcionarios[i]->calcularSalario();
    }

    return valorTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula){

    for (int i = 0; i < FUNCIONARIO_MAX; i++){
        if(funcionarios[i]->getMatricula() == matricula){
            return funcionarios[i]->calcularSalario();
        }
    }
}
