#include <iostream>
using namespace std;

int main(){
    int soma,cont,n;
    n = 3;
    soma = 0;
    cont = 1;

    while (cont <= n)
    {
        soma += cont;
        cont ++;
    }
    cout << "A soma do numero 0 ate " << n << "=" << soma;
}