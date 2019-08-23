#include <iostream>
#include "Classes.h"
#include "SistemaGerenciaFolha.h"

using namespace std;

int main(){

    SistemaGerenciaFolha sgf = SistemaGerenciaFolha();

    Funcionario *ass = new Assalariado();
    Funcionario *com = new Comissionados();
    Funcionario *hor = new Horistas();

    ass->setNome("Jackson Leandro");
    ass->setMatricula(5610);
    ((Assalariado *)ass)->setSalario(1000);

    com->setNome("Nascimento Leandro");
    com->setMatricula(1056);

    ((Comissionados *)com)->setSalarioBase(900);
    ((Comissionados *)com)->setVendasSemanais(250);
    ((Comissionados *)com)->setPercentualComissao(15);

    hor->setNome("Leandro Jackson");
    hor->setMatricula(5160);
    ((Horistas *)hor)->setSalarioPorHora(50);
    ((Horistas *)hor)->setHorasTrabalhadas(42);

    sgf.setFuncionarios(ass);
    sgf.setFuncionarios(com);
    sgf.setFuncionarios(hor);

    ass->imp();
    com->imp();
    hor->imp();

    cout << "Total de pagamento na folha: " << sgf.calculaValorTotal() << endl;
    cout << "Salario funcionario de matricula 659: " << sgf.consultaSalarioFuncionario(659) << endl;



    return 0;
}
