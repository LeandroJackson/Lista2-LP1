#include "triangulo.h"
#include<iostream>
Triangulo::Triangulo(std::string n,double b, double a): FiguraGeometrica( n ) {

Name = n;
base = b;
altura = a;

}

double Triangulo::CalcularArea(double b, double a){
    return (b * a) / 2;
}
