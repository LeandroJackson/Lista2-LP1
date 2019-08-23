#ifndef CIRURGIAO_H_INCLUDED
#define CIRURGIAO_H_INCLUDED
#include <string>
#include "Medico.h"

class Cirurgiao: public Medicos{
    private:
        std::string nome;
        std::string especializacao;
        double peso;
        double altura;


        void Setnome(std::string val) { nome = val; }
        void Setaltura(double val) { altura = val; }
        void Setpeso(double val) { peso = val; }
        void Setespecializacao(std::string val) { especializacao = val; }

    public:
        Cirurgiao();
        Cirurgiao(std::string, double, double, std::string);
        virtual ~Cirurgiao();

        std::string Getnome() { return nome; };
        std::string Getespecializacao() { return especializacao; }

        double Getaltura() { return altura; }
        double Getpeso() { return peso; }

        void Atendimento();
        void imp();
};


#endif // CIRURGIAO_H_INCLUDED
