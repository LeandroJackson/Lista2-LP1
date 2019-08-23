#include "ContaEspecial.h"

        ContaEspecial::ContaEspecial(){
        //as
        }
        ContaEspecial::ContaEspecial(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo){
            this->nomeCliente = nomeCliente;
            this->salarioMensal = salarioMensal;
            this->numeroConta = numeroConta;
            this->saldo = saldo;
        }


        ContaEspecial::~ContaEspecial(){//dtor
        }
        void ContaEspecial::definirLimite(){
            this->limite = 3*salarioMensal;
        }
