#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

       fstream arquivo1, arquivo2;
       string nome, escrita;
       char opc='s';

           arquivo1.open("teste.txt", ios::out|ios::app); //Abriu o primeiro arquivo para escrita

           while((opc=='s')or(opc=='S')){
            cout << "DIGITE UM NOME: ";
            cin >> nome;
            arquivo1 << nome << "\n";
            cout << "\nDigitar um novo nome?[s/n]" << endl;
            cin >> opc;
           } //Codigo para o usuario escrever no primeiro arquivo

           arquivo1.close();

           /*Caso não queira que o usuario escreva diretamento no programa e sim no arquivo da pasta, use o
           codigo de baixo*/


            arquivo1.open("teste.txt", ios::in); //Abriu o primeio arquivo para leitura dos dados
            arquivo2.open("teste_bkp.txt", ios::out|ios::app);// Abriu o segundo arquivo para escrita



            if(arquivo1.is_open()){
                while(getline(arquivo1, escrita)){ //copia linha por linha do primeiro arquivo para a string
                    arquivo2 << escrita << "\n"; //escreve as informações da string no arquivo 2
                }
            }else{
                cout << "nao foi possivel abrir o arquivo" << endl;
            }

            arquivo1.close();
            arquivo2.close();


    return 0;
}
