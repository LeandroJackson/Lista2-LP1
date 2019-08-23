#ifndef QUADRADO_H
#define QUADRADO_H
#include"figurageometrica.h"

class Quadrado: public FiguraGeometrica{

    public:
        double Lado;
        std::string Nome;

        Quadrado(std::string n, double l);
        double CalcularArea(double l);




};
#endif // QUADRADO_H
