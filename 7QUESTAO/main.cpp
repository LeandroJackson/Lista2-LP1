#include <iostream>
#include "GerenciamentoDoRestaurante.h"

using namespace std;

int main(){

    Pedido p1(1, 1, "Pizza", 10.99);
    Pedido p2(2, 1, "Lasanha", 8.99);
    Pedido p3(3, 1, "Macarronada", 5.99);

    p1.imp();
    p2.imp();
    p3.imp();

    MesaDeRestaurante m1;
    MesaDeRestaurante m2;

    m1.adicionaAoPedido(p1);
    m1.adicionaAoPedido(p2);

    m2.adicionaAoPedido(p2);
    m2.adicionaAoPedido(p2);
    m2.adicionaAoPedido(p3);

    cout << "Total da mesa 1: " << m1.calculaTotal() << endl;
    cout << "Total da mesa 2: " << m2.calculaTotal() << endl << endl;

    RestauranteCaseiro r1;

    r1.NovaMesa(m1);
    r1.NovaMesa(m2);

    cout << "Total do restaurante: " << r1.calculaTotalRestaurante() << endl;

    r1.adicionaAoPedido(2, p1);

    cout << "Total do restaurante apos novo pedido: " << r1.calculaTotalRestaurante() << endl;


    return 0;
}
