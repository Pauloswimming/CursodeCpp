#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    char operador;

    cout << "Digite seu numero:";
    cin >> num1;
    cout << "\n";

    cout << "Digite o segundo numero:";
    cin >> num2;
    cout << "\n";

    cout << "Digite algum operador(+,-,*,/):";
    cin >> operador;
    cout << "\n";

    switch (operador)
    {
    case '+':
        cout << "a soma =" << num1+num2;
        break;
    case '-':
        cout << "a subtracao =" << num1-num2;
        break;
    case '*':
        cout << "a multiplicacao =" << num1*num2;
        break;

    case '/':
        cout << "a divisao =" << num1/num2;
        break;
    
    default:
        cout << "Digite algum desse operador(+,-,*,/):";
        break;
    }
}