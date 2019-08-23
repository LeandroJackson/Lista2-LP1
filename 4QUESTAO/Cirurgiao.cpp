#include "Cirurgiao.h"
#include <iostream>
#include <string>

using namespace std;

        Cirurgiao::Cirurgiao(){}
        Cirurgiao::Cirurgiao(string n, double a, double p, string e){//ctor
            nome = n;
            altura = a;
            peso = p;
            especializacao = e;
        }
        Cirurgiao::~Cirurgiao(){//dtor
        }

        void Cirurgiao::Atendimento(){
            cout<< "Fazendo Cirurgia" <<endl;
        }

        void Cirurgiao::imp(){
            cout << "Medico: " << Getnome() << "\nAltura: " << Getaltura() << "\nPeso: " << Getpeso() << "\nEspecializaçao: "
            << Getespecializacao() << endl;
        }




