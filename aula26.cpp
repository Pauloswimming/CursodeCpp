//Exercício de Ponteiro:
#include <iostream>
using namespace std;

void trocavalores(int* pontA,int* pontB){
    int temp = *pontA;
    *pontA = *pontB;
    *pontB = temp;
}

int main(){
    int num1,num2;
    cout << "Digite o primeiro numero:";
    cin >> num1;
    cout << "\n";

    cout << "Digite o segundo numero:";
    cin >> num2;
    cout << "\n";

    cout << "Numeros antes da troca:\n";
    cout << "Primeiro numero:" << num1 << "\n";
    cout << "Segundo número:" << num2 << "\n";

    trocavalores(&num1,&num2);
    cout << "numero apos a troca:\n";
    cout << "Primeiro numero:" << num1 << "\n";
    cout << "Segundo numero:" << num2 << "\n";


}