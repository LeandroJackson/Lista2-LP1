#include "Ginecologista.h"
#include <string>
#include <iostream>


using namespace std;

        Ginecologista::Ginecologista(){};

        Ginecologista::Ginecologista(string n, double a, double p, string e){ //ctor
            nome = n;
            altura = a;
            peso = p;
            especializacao = e;
        }
        Ginecologista::~Ginecologista(){//dtor
        }

        void Ginecologista::Atendimento(){
            cout << "Ginecologista atendendo paciente" << endl;
        }

        void Ginecologista::imp(){
            cout << "Medico: " << Getnome() << "\nAltura: " << Getaltura() << "\nPeso: " << Getpeso() << "\nEspecializaçao: "
            << Getespecializacao() << endl;
        }
