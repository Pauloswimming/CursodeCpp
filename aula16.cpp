/*
exercio no qual vcs vão cacular a media entre as notas fazer entradas
para o usuario digitar as notas usar estruruta condicionais para mostrar
se passou ou reprovou é tbm colocar operadores logicos pra frequencia
que deve ser maior que 75%
*/
#include <iostream>
using namespace std;

int main(){
    float nota1,nota2,media,frequencia;

    cout << "Digite a sua nota:";
    cin >> nota1;
    cout << "\n";

    cout << "Digite a sua segunda nota:";
    cin >> nota2;
    cout << "\n";

    cout << "Digite a sua frequencia:";
    cin >> frequencia;
    cout << "\n";

    media = (nota1+nota2)/2;

    if (media>=5 && frequencia >=75)
    {
        cout << "A sua media foi:" << media << "\na sua frequencia foi:" << frequencia;
        cout << "\nAprovado";
    }else{
       cout << "A sua media foi:" << media << "\na sua frequencia foi:" << frequencia;
       cout << "\nReprovado";
    }
    
}