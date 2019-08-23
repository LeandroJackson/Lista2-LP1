#ifndef CONTAESPECIAL_H_INCLUDED
#define CONTAESPECIAL_H_INCLUDED

#include "Conta.h"

class ContaEspecial : public Conta{
    public:
        ContaEspecial();
        ContaEspecial(std::string, double, int, double);
        virtual ~ContaEspecial();
        void definirLimite();

    protected:

    private:
};

#endif // CONTAESPECIAL_H_INCLUDED
