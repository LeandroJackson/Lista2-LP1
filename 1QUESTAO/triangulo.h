#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "figurageometrica.h"

class Triangulo : public FiguraGeometrica{

  public:
        std::string Name;
        double base, altura;

        Triangulo(std::string n, double b, double a);
        double CalcularArea(double b,double a);


};


#endif // TRIANGULO_H
