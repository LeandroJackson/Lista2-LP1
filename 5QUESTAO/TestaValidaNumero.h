#ifndef TESTAVALIDANUMERO_H_INCLUDED
#define TESTAVALIDANUMERO_H_INCLUDED

#include <stdexcept>
#include <string>

using namespace std;

    class TestaValidaNumero{
        private:
            int numero;
        public:
            TestaValidaNumero();
            void validaNumero(int);
    };

    class ValorAbaixoException: public std::exception{
        private:
            const char* msg;
        public:
            ValorAbaixoException(const char*);
            const char* Verifica(){ return msg;
            }

    };

    class ValorAcimaException: public std::exception{
        private:
            const char* msg;
        public:
            ValorAcimaException(const char*);
            const char* Verifica(){ return msg;
            }
    };

    class ValorMuitoAcimaException{
        private:
            const char* msg;
        public:
            ValorMuitoAcimaException(const char*);
            const char* Verifica(){ return msg;
            }
    };

#endif // TESTAVALIDANUMERO_H_INCLUDED
