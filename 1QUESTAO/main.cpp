#include "Quadrado.h"
#include "Circulo.h"
#include "triangulo.h"
#include "figurageometrica.h"

using namespace std;

int main()
{
    Triangulo *t1 = new Triangulo("Triangulo",3,3);
    Circulo *c1 = new Circulo ("Circulo", 5);
    Quadrado *q1 = new Quadrado("Quadrado",10);


        cout << "\nTriangulo:" << endl;
        cout << "valor da area eh: " << t1->CalcularArea(2, 4) << endl;

        cout << "\nCirculo:" << endl;
        cout << "valor da area eh: " << c1->CalcularArea(1) << endl;


        cout << "\nQuadrado:" << endl;
        cout << "valor da area eh: " << q1->CalcularArea(3) << endl;

    return 0;
}
