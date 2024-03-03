/*
Exercício de Entrada e Saída de Variáveis:
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    int idade;
    float altura;
    string nome;

    cout << "Digite o seu nome:";
    getline(cin,nome);
    cout << "\n";

    cout << "Digite sua idade:";
    cin >> idade;
    cout << "\n";


    cout << "Digite a sua altura:";
    cin >> altura;
    cout << "\n";


}