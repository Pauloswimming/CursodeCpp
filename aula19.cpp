//Exercício de switch case:
#include <iostream>
using namespace std;
/*
quero que você utilize switch
o usuario vai digitar a mês que faz aniversario
janeiro,fevereiro,março,abril,maio,junho,julho,agosto
setembro,outubro,novembro,dezembro
*/
int main(){
    int aniversario;
    cout << "Digite o mes do seu aniversario:";
    cin >> aniversario;
    cout << "\n";

    switch (aniversario)
    {
    case 1:
        cout << "mes 1 seria em janeiro";
        break;
    case 2:
        cout << "mes 2 seria em fevereiro";
        break;
    case 3:
        cout << "mes 3 seria em marco";
        break;     
    case 4:
        cout << "mes 4 seria em abril";
        break;   
    case 5:
        cout << "mes 5 seria em maio";
        break;
    case 6:
        cout << "mes 6 seria em junho";
        break;
    case 7:
        cout << "mes 7 seria em julho";
        break;
    case 8:
        cout << "mes 1 seria em agosto";
        break;
    case 9:
        cout << "mes 9 seria em setembro";
        break;
    case 10:
        cout << "mes 10 seria em outubro";
        break;
    case 11:
        cout << "mes 11 seria em novembro";
        break;
    case 12:
        cout << "mes 1 seria em dezembro";
        break;
    
    default:
        cout << "Digite de 1 ate 12 pra rodar o programa!";
        break;
    }
}