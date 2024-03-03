//Estrutura de repetiçao com For:
#include <iostream>
using namespace std;

int main(){
    int numero,i;

    cout << "Digite a contagem para o ano novo:";
    cin >> numero;
    cout << "\n";

    for(i=numero;i>=0;i--){
        cout << i << "\n";
    }
}