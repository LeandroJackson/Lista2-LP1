#include "Oftomologista.h"
#include <string>
#include <iostream>


using namespace std;

        Oftalmologista::Oftalmologista(){};

        Oftalmologista::Oftalmologista(string n, double a, double p, string e){ //ctor
            nome = n;
            altura = a;
            peso = p;
            especializacao = e;
        }
        Oftalmologista::~Oftalmologista(){//dtor
        }

        void Oftalmologista::Atendimento(){
            cout << "Otorrino atendendo paciente" << endl;
        }

        void Oftalmologista::imp(){
            cout << "Medico: " << Getnome() << "\nAltura: " << Getaltura() << "\nPeso: " << Getpeso() << "\nEspecializaçao: "
            << Getespecializacao() << endl;
        }
