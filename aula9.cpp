//Exercicio calcular a média de algumas notas com entradas e saidas do usuario!
#include <iostream>
using namespace std;

int main(){
    float num1,num2,media;
    
    cout << "Digite a primeira nota da prova 1:";
    cin >> num1;
    cout << "\n";

    cout << "Digite a segunda nota da prova 2:";
    cin >> num2;
    cout << "\n";

    media = (num1+num2)/2;

    

    cout << "A media foi:" << media;
}