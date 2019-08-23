#include <iostream>
#include <string>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    Conta c1 = Conta("Jackson", 1000, 56780145, 400);
    ContaEspecial ce1 = ContaEspecial("Leandro", 500, 58000, 300);

    c1.definirLimite();
    ce1.definirLimite();

    cout << "LIMITES" << endl << endl;
    cout << "Conta Normal: " << c1.getLimite() << endl;
    cout << "Conta Especial: " << ce1.getLimite() << endl << endl;

    cout << "DEPOSITANDO 100 REAIS EM CADA CONTA..." << endl << endl;

    c1.depositar(100);
    ce1.depositar(100);

    cout << "EXIBINDO SALDO..." << endl << endl;

    cout << "Conta Normal: " << c1.getSaldo() << endl;
    cout << "Conta Especial: " << ce1.getSaldo() << endl << endl;

    cout << "SACANDO 150 E 200 REAIS, RESPECTIVAMENTE..." << endl << endl;

    try{
        c1.sacar(501);
        ce1.sacar(200);
    }catch(const char* e){
       cout << e << endl;
    }

    cout << "EXIBINDO NOVO SALDO" << endl << endl;
    cout << "Conta Normal: " << c1.getSaldo() << endl;
    cout << "Conta Especial: " << ce1.getSaldo() << endl << endl;

    return 0;
}
