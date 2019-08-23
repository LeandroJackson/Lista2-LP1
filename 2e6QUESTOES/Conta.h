#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "Iconta.h"

class Conta : public Iconta{
    public:
        Conta();
        Conta(std::string, double, int, double);
        virtual ~Conta();

        std::string getNomeCliente();
        double getSalarioMensal();
        double getSaldo();
        double getLimite();
        int getNumeroConta();

        void setNomeCliente(std::string);
        void setSalarioMensal(double);
        void setSaldo(double);
        void setLimite(double);
        void setNumeroConta(int);

        void definirLimite();
        void sacar(double);
        void depositar(double);

    protected:
        std::string nomeCliente;
        double salarioMensal;
        int numeroConta;
        double saldo;
        double limite;

    private:
};

#endif // CONTA_H
