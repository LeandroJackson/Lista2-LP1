#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

#include <iostream>

#include "Funcionarios.h"

// Decidi colocar as classes ASSALARIADO, HORISTA e COMISSARIO neste arquivo "classes.h"

class Assalariado: public Funcionario{
    private:
        double salario;
    public:
        Assalariado();
       Assalariado(std::string, int, double);

       virtual double calcularSalario();
       double getSalario();

       void setSalario(double);
       void imp();
};

class Horistas: public Funcionario{
    private:
        double salarioPorHora;
        double horasTrabalhadas;
    public:
        Horistas();
        Horistas(std::string, int, double, double);
        virtual double calcularSalario();
        void imp();

        void setHorasTrabalhadas(double horasTrabalhadas);
        void setSalarioPorHora(double salarioPorHora);

        double getHorasTrabalhadas();
        double getSalarioPorHora();


};

class Comissionados: public Funcionario{
    private:
        double vendasSemanais;
        double percentualComissao;

        double salarioBase;
    public:
        Comissionados();
        Comissionados(std::string, int, double, double, double);

        void setVendasSemanais(double);
        void setPercentualComissao(double);
        void setSalarioBase(double);

        double getVendasSemanais();
        double getPercentualComissao();
        double getSalarioBase();

        virtual double calcularSalario();
        void imp();
};

#endif // CLASSES_H_INCLUDED
