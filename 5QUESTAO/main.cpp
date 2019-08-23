#include <iostream>
#include <stdexcept>
#include "TestaValidaNumero.h"

using namespace std;

int main(){

    int x;

    TestaValidaNumero *t1 = new TestaValidaNumero();
    while(1){
        cin >> x;
        try{
            t1->validaNumero(x);
        }catch(const char* e){
            cout << e << endl;
        }
    }

    return 0;
}
