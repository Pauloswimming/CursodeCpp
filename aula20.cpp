//Criar uma Função:
/*
criar uma função que calcula a área de um retângulo em que 
o usuario vai digitar comprimento e largura
*/
#include <iostream>
using namespace std;
int retangulo(int a , int b){
    return a * b;
}
int main(){
    int comprimento,largura,resultado;

    cout << "Digite o comprimento do retangulo:";
    cin >> comprimento;
    cout << "\n";

    cout << "Digite a largura do retangulo:";
    cin >> largura;
    cout << "\n";

    resultado = retangulo(comprimento,largura);

    cout << "a area do seu retangulo:" << resultado;


}