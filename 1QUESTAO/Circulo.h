#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "figurageometrica.h"
#include <string>

class Circulo : public FiguraGeometrica{

    public:
        std::string Name;
        double raio;

        Circulo(std::string, double);
        double CalcularArea(double);
};

#endif // CIRCULO_H_INCLUDED
