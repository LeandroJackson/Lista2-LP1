#include "Otorrino.h"
#include <string>
#include <iostream>


using namespace std;

        Otorrino::Otorrino(){};

        Otorrino::Otorrino(string n, double a, double p, string e){ //ctor
            nome = n;
            altura = a;
            peso = p;
            especializacao = e;
        }
        Otorrino::~Otorrino(){//dtor
        }

        void Otorrino::Atendimento(){
            cout << "Otorrino atendendo paciente" << endl;
        }

        void Otorrino::imp(){
            cout << "Medico: " << Getnome() << "\nAltura: " << Getaltura() << "\nPeso: " << Getpeso() << "\nEspecializaçao: "
            << Getespecializacao() << endl;
        }
