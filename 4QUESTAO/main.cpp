#include <iostream>
#include <string>

#include "Medico.h"
#include "Cirurgiao.h"
#include "Oftomologista.h"
#include "Otorrino.h"
#include "Ginecologista.h"

using namespace std;

int main(){

Medicos *Funcionarios[6];

Funcionarios[0] = new Cirurgiao();
Funcionarios[1] = new Oftalmologista();
Funcionarios[2] = new Otorrino();
Funcionarios[3] = new Ginecologista("JOSUE", 1.9, 25, "Ginecologista");

Cirurgiao *ci = new Cirurgiao("Jackson", 1.84, 84, "Cirurgiao");
Oftalmologista *of = new Oftalmologista("Leandro", 1.88, 75, "Oftamologista");
Otorrino *ot = new Otorrino("Nascimento", 1.80, 80, "Otorrino");
Ginecologista *gi = new Ginecologista("Leandro Jackson", 1.88, 85, "Ginecologista");


        ci->imp();
        cout << "STATUS: ";
        Funcionarios[0] -> Atendimento();
        cout << endl;
        of->imp();
        cout << "STATUS: ";
        Funcionarios[1] -> Atendimento();
        cout << endl;
        ot->imp();
        cout << "STATUS: ";
        Funcionarios[2] -> Atendimento();
        cout << endl;
        gi->imp();
        cout << "STATUS: ";
        Funcionarios[3] -> Atendimento();


        //Teste do imp na Superclasse

        cout << endl << endl << endl;
        Funcionarios[3] -> imp();



    return 0;
}
