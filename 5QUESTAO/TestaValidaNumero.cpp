#include "TestaValidaNumero.h"
#include <string>
#include <iostream>
#include <stdexcept>

    TestaValidaNumero::TestaValidaNumero(){
    }
    void TestaValidaNumero::validaNumero(int num){

        ValorAbaixoException *e1 = new ValorAbaixoException("__INVALIDO__Valor a Baixo");
        ValorAcimaException *e2 = new ValorAcimaException("__INVALIDO__Valor a cima");
        ValorMuitoAcimaException *e3 = new ValorMuitoAcimaException("__INVALIDO__Valor MUITO a cima");

        if(num < 0){
            throw e1->Verifica();
        }else if(num > 100 && num < 1000){
            throw e2->Verifica();
        } else if(num > 1000 || num == 1000){
            throw e3->Verifica();
        }  else
            std::cout << "NUMERO VALIDO" << std::endl;
    }

    ValorAbaixoException::ValorAbaixoException(const char* ms){
        msg = ms;
    };

    ValorAcimaException::ValorAcimaException(const char* ms){
        msg = ms;
    }

    ValorMuitoAcimaException::ValorMuitoAcimaException(const char* ms){
        msg = ms;
    }
