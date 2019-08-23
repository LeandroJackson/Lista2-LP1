#include "Quadrado.h"

    Quadrado::Quadrado(std::string n, double l):FiguraGeometrica(n){

Nome = n;
Lado = l;


}
double Quadrado::CalcularArea(double l){
return l*l;
}
