#ifndef GERENCIAMENTODORESTAURANTE_H_INCLUDED
#define GERENCIAMENTODORESTAURANTE_H_INCLUDED

#include <string>

#define MESAS_PEDIDOS 50

class Pedido{
    protected:

        int numero;
        int quantidade;
        double preco;
        std::string descricao;

    public:
        Pedido(int,int,std::string, double);
        Pedido();

        int getNumero() { return numero;}
        int getQuant() { return quantidade; }
        double getPreco() { return preco; }
        std::string getDescricao() { return descricao; }

        void setQuant(int q);
        void setNumero(int);
        void setPreco(double);
        void setDescricao(std::string);
        void imp();
};



class MesaDeRestaurante{
    private:
        Pedido pedidos[MESAS_PEDIDOS];
    public:
        MesaDeRestaurante();

        void adicionaAoPedido(Pedido);
        void zerarPedido();

        double calculaTotal();
};



class RestauranteCaseiro{
    private:
        MesaDeRestaurante mesaRes[MESAS_PEDIDOS];
    public:
        RestauranteCaseiro();
        void adicionaAoPedido(int, Pedido);
        double calculaTotalRestaurante();
        void NovaMesa(MesaDeRestaurante);



};
#endif // GERENCIAMENTODORESTAURANTE_H_INCLUDED
