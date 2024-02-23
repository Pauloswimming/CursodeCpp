#include <iostream>
using namespace std;

int main(){
    int choice;
    cout << "Digite uma opcao(1,2,3):";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Vc digitou o numero 1!\n";
        break;
    case 2:
        cout <<"vc digitou o numero 2!\n";
        break;
    case 3:
        cout << "vc digitou o numero 3!\n";
        break;
    
    default:
        cout << "opcao invalida,digite 1,2,3!\n";
        break;
    }
}