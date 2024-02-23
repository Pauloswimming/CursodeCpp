//https://brasilescola.uol.com.br/matematica/equacoes-matematicas-na-conversao-temperaturas.htm
//fahrenhei
#include <iostream>
using namespace std;
float celsius_fahrenhei(float celsius){
    return (celsius * 9.0/5.0) + 32.0;
}

float fahrenhei_celsius(float fahrenhei){
    return (fahrenhei -32.0) * 5.0 /9.0;
}


int main(){
    int choice;
    float temp;

    do
    {
        cout << "Escolha uma opcao:\n";
        cout << "1.converter celsius para fahrenhei\n";
        cout << "2.converter fahrenhei para celsius\n";
        cout << "3.sair\n";
        cout << "opcao:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Digite a temperatura em celsiu: ";
            cin >> temp;
            cout << "temperatura em fahrenhei:" <<
            celsius_fahrenhei(temp) << "\n";
            break;
        case 2:
            cout << "Digite a temperatura em fahrenhei: ";
            cin >> temp;
            cout << "temperatura em celsius: " << fahrenhei_celsius(temp) << "\n";
            break;
        case 3:
            cout << "saindo ...";
            break;
        
        default:
            cout << "opcao invalida\n";
            break;
        }
    } while (choice != 3);

    return 0;
    
}