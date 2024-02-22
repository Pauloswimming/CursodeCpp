#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char operadores;

    cout << "Digite seu numero:";
    cin >> num1;
    cout << "\n";

    cout << "Digite o seu segundo numero:";
    cin >> num2;
    cout << "\n";

    cout << "Digite algum operador:";
    cin >> operadores;
    cout << "\n";

    switch (operadores)
    {
    case '+':
        cout << "a soma =" << num1 + num2;
        break;
    case '-':
        cout << "a subtracao =" << num1 - num2;
        break;
    case '*':
    cout << "multiplicacao =" << num1 * num2;
    break;

    case '/':
    cout << "divisao =" << num1 / num2;
    break;
    
    default:
        cout << "Digite algum desse operadores(+,-,*,/)";
        break;
    }
}