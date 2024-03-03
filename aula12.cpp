//Estrutura de repetição com Do while:
#include <iostream>
using namespace std;

int main(){
    int soma,cont,n;
    soma = 0;
    cont = 1;
    n = 3;

    do
    {
    soma +=cont;
    cont +=1;
    } while (cont <= n);

    cout << "A soma de 0 ate " << n << "=" << soma;
    
    
}