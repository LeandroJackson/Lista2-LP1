#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include<iostream>
#include<string>

class FiguraGeometrica{

public:
    std::string Nome;

public:
    FiguraGeometrica(std::string n);
    double CalcularArea();

};

#endif // FIGURAGEOMETRICA_H
