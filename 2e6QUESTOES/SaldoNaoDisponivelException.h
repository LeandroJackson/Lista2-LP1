#ifndef SALDONAODISPONIVELEXCEPTION_H_INCLUDED
#define SALDONAODISPONIVELEXCEPTION_H_INCLUDED

#include <stdexcept>

class SaldoNaoDisponivelException: public std::exception{
    private:
        const char* msg;
    public:
        SaldoNaoDisponivelException(const char* m){
            msg = m;
        }
        const char* verifica(){
            return msg;
        }
};


#endif // SALDONAODISPONIVELEXCEPTION_H_INCLUDED
