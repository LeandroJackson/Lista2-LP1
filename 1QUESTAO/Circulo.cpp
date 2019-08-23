#include "Circulo.h"
#include <string>
#define PI 3.14

using namespace std;

Circulo::Circulo(string n, double r):FiguraGeometrica(n){

    Name = n;
    raio = r;
}

    double Circulo::CalcularArea(double r){
    return PI*r*r;
}
