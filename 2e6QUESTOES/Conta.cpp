#include "Conta.h"
#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException *e = new SaldoNaoDisponivelException("Valor sacado eh maior do que o saldo disponivel");

Conta::Conta(){
}
Conta::Conta(std::string nomeCliente, double salarioMensal, int numeroConta, double saldo){
    this->nomeCliente = nomeCliente;
    this->salarioMensal = salarioMensal;
    this->numeroConta = numeroConta;
    this->saldo = saldo;
}

Conta::~Conta(){    //dtor
}

std::string Conta::getNomeCliente(){
    return nomeCliente;
}
double Conta::getSalarioMensal(){
    return salarioMensal;
}
double Conta::getSaldo(){
    return saldo;
}
double Conta::getLimite(){
    return limite;
}
int Conta::getNumeroConta(){
    return numeroConta;
}

void Conta::setNomeCliente(std::string nomeCliente){
    this->nomeCliente = nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal){
    this->salarioMensal = salarioMensal;
}
void Conta::setSaldo(double saldo){
    this->saldo = saldo;
}
void Conta::setLimite(double limite){
    this->limite = limite;
}
void Conta::setNumeroConta(int numeroConta){
    this->numeroConta = numeroConta;
}

void Conta::definirLimite(){
    this->limite = 2*this->salarioMensal;
}

void Conta::sacar(double valor){
    if(valor > saldo){
        throw e->verifica();
    }else this->setSaldo(saldo-valor);
}

void Conta::depositar(double valor){
    this->setSaldo(saldo+valor);
}
