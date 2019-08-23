#ifndef OFTOMOLOGISTA_H_INCLUDED
#define OFTOMOLOGISTA_H_INCLUDED
#include <string>
#include "Medico.h"


class Oftalmologista: public Medicos{

    private:
        std::string nome;
        std::string especializacao;
        double peso;
        double altura;

        void Setnome(std::string val) { nome = val; }
        void Setpeso(double val) { peso = val; }
        void Setespecializacao(std::string val) { especializacao = val; }
        void Setaltura(double val) { altura = val; }

    public:
        Oftalmologista();
        Oftalmologista(std::string, double, double, std::string);
        virtual ~Oftalmologista();

        std::string Getnome() { return nome; }
        std::string Getespecializacao() { return especializacao; }

        double Getaltura() { return altura; }
        double Getpeso() { return peso; }

        void Atendimento();
        void imp();

};


#endif // OFTOMOLOGISTA_H_INCLUDED
