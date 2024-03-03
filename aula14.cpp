//Exercício usando Estrutura de Repetição:
#include <iostream>
using namespace std;

int main() {
    int chocolates = 10; // Imagine que temos 10 chocolates na caixa

    // Enquanto ainda houver chocolates na caixa, continue comendo
    while (chocolates > 0) {
        cout << "Estou comendo um chocolate!" << endl;
        chocolates--; // Depois de comer um chocolate, tiramos um da caixa
    }

    cout << "A caixa de chocolates está vazia agora." << endl;

    return 0;
}