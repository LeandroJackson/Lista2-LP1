#include "Classes.h"
#include "Funcionarios.h"

using namespace std;

    Assalariado::Assalariado(){
        nome = " ";
        salario = 0;
        matricula = 0;
    }

    Assalariado::Assalariado(std::string nom, int matricul, double sala){
        setNome(nom);
        setMatricula(matricul);
        setSalario(sala);
    }

    void Assalariado::setSalario(double sala){
        if(sala > 0)
            salario = sala;
        else
            salario = 0;
    }

    double Assalariado::getSalario(){
        return salario;
    }

    double Assalariado::calcularSalario(){
        return salario;
    }

    void Assalariado::imp(){
     std::cout << "\nAssalariado\n" << std::endl
           << "Nome: " << nome << std::endl
           << "Matricula: " << matricula << std::endl
           << "Salario: " << salario << std::endl;
    }



    Horistas::Horistas(){
        nome = " ";
        matricula = 0;
        horasTrabalhadas = 0;
        salarioPorHora = 0;
}

    Horistas::Horistas(std::string nome, int matricula, double horasTrabalhadas, double salarioPorHora){
        setNome(nome);
        setMatricula(matricula);
        setHorasTrabalhadas(horasTrabalhadas);
        setSalarioPorHora(salarioPorHora);
    }

    void Horistas::setHorasTrabalhadas(double horasT){
        if(horasT > 0)
            horasTrabalhadas = horasT;
        else
            horasTrabalhadas = 0;
    }

    void Horistas::setSalarioPorHora(double salarioP){
        if(salarioP > 0)
            salarioPorHora = salarioP;
        else
            salarioPorHora = 0;
    }

    double Horistas::getHorasTrabalhadas(){
        return horasTrabalhadas;
    }


    double Horistas::calcularSalario(){
        if(horasTrabalhadas > 40){
        return (salarioPorHora * 40) + (horasTrabalhadas - 40) * (salarioPorHora * 1,5) * 4;
    }else{
        return salarioPorHora * horasTrabalhadas * 4;
    }
    }

    double Horistas::getSalarioPorHora(){
        return salarioPorHora;
    }


    void Horistas::imp(){
    std::cout << "\nHorista\n" << std::endl
           << "Nome: " << nome << std::endl
           << "Matricula: " << matricula << std::endl
           << "Salario por hora: " << salarioPorHora << std::endl
           << "Horas trabalhadas: " << horasTrabalhadas << std::endl
           << "Salario mensal: " << calcularSalario() << std::endl;
    }



    Comissionados::Comissionados(){
        nome = " ";
        matricula = 0;
        salarioBase = 0;
        vendasSemanais = 0;
        percentualComissao = 0;
    }

    Comissionados::Comissionados(std::string nome, int matricula, double salarioBase, double vendasSemanais, double percentualComissao){
        setNome(nome);
        setMatricula(matricula);
        setSalarioBase(salarioBase);
        setVendasSemanais(vendasSemanais);
        setPercentualComissao(percentualComissao);
    }

    void Comissionados::setVendasSemanais(double vendasS){
        if(vendasS > 0)
            vendasSemanais = vendasS;
        else
            vendasSemanais = 0;
    }

    void Comissionados::setPercentualComissao(double percentualC){
        if(percentualC > 0)
            percentualComissao = percentualC;
        else
            percentualComissao = 0;
    }

    void Comissionados::setSalarioBase(double salarioB){
        if(salarioB > 0)
            salarioBase = salarioB;
        else
            salarioBase = 0;
    }

    double Comissionados::getVendasSemanais(){
        return vendasSemanais;
    }

    double Comissionados::getPercentualComissao(){
    return percentualComissao;
    }

    double Comissionados::getSalarioBase(){
        return salarioBase;
    }

    double Comissionados::calcularSalario(){
        return salarioBase + (vendasSemanais * (percentualComissao/100));
    }

    void Comissionados::imp(){
        std::cout << "\nComissionado\n" << std::endl
           << "Nome: " << nome << std::endl
           << "Matricula: " << matricula << std::endl
           << "Salario base: " << salarioBase << std::endl
           << "Vendas semanais: " << vendasSemanais << std::endl
           << "Percentual de comissao: " << percentualComissao << std::endl
           << "Salario mensal: " << calcularSalario() << std::endl;
    }





















