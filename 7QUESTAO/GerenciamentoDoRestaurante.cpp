#include "GerenciamentoDoRestaurante.h"
#include <string>
#include <iostream>

using namespace std;

    Pedido::Pedido(){
        numero = 0;
        quantidade = 0;
        preco = 0;
        descricao = " ";
    }

    Pedido::Pedido(int num, int quant, std::string des, double pre){
        setNumero(num);
        setQuant(quant);
        setDescricao(des);
        setPreco(pre);
    }

    void Pedido::setNumero(int numero){
        if(numero > 0){
            this->numero = numero;
        } else
            this->numero = 0;
    }

    void Pedido::setPreco(double preco){
        if(preco > 0){
            this->preco = preco;
        } else
            this->preco = 0;
    }

    void Pedido::setQuant(int quantidade){
        if(quantidade > 0){
            this->quantidade = quantidade;
        } else
            this->quantidade = 0;
    }

    void Pedido::setDescricao(std::string descricao){
        this->descricao = descricao;
    }



    void Pedido::imp(){
        cout << "Numero do pedido: " << numero << "\nDescricao: " << descricao << "\nPreco: "
           << preco << " R$\nQuantidade: " << quantidade << endl;
    }


    MesaDeRestaurante::MesaDeRestaurante(){
                zerarPedido();
    }



    void MesaDeRestaurante::adicionaAoPedido(Pedido p){
        for(int i = 0; i < MESAS_PEDIDOS; i++){
            if(p.getDescricao() == pedidos[i].getDescricao()){
                pedidos[i].setQuant(pedidos[i].getQuant() + p.getQuant());
                return;
            }
        }
        for(int i = 0; i < MESAS_PEDIDOS; i++){
            if(pedidos[i].getNumero() == 0){
                pedidos[i] = p;
                break;
            }
        }
    }

    void MesaDeRestaurante::zerarPedido(){
        for(int i = 0; i < MESAS_PEDIDOS; i++){
            pedidos[i].setNumero(0);
            pedidos[i].setQuant(0);
            pedidos[i].setPreco(0);
            pedidos[i].setDescricao(" ");
        }
    }

    double MesaDeRestaurante::calculaTotal(){
        double soma = 0;

            for(int i = 0; i < MESAS_PEDIDOS; i++){
                soma += pedidos[i].getPreco() * pedidos[i].getQuant();
            }

        return soma;
    }




    RestauranteCaseiro::RestauranteCaseiro(){
        for(int i = 0; i < MESAS_PEDIDOS; i++){
            mesaRes[i].zerarPedido();
        }
    }

    void RestauranteCaseiro::adicionaAoPedido(int quant, Pedido p1){
        if(quant >= 0 && quant < MESAS_PEDIDOS){
            mesaRes[quant].adicionaAoPedido(p1);
        }
    }

    double RestauranteCaseiro::calculaTotalRestaurante(){
        double total = 0;

        for(int i = 0; i < MESAS_PEDIDOS; i++){
            total += mesaRes[i].calculaTotal();
        }

        return total;
    }

    void RestauranteCaseiro::NovaMesa(MesaDeRestaurante m){
        for(int i = 0; i < MESAS_PEDIDOS; i++){
        if(mesaRes[i].calculaTotal() == 0){
            mesaRes[i] = m;
            break;
        }
    }
    }














