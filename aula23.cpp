#include <iostream>
using namespace std;

int main(){
    int var1;
    int* pont;
    var1 = 4;
    pont = &var1;

    cout << "o valor da variavel atraves do seu nome: "<<var1 << "\n";
    cout <<  "endereco que armazena no ponteiro:"<< pont << "\n";
    cout << "valor da variavel atraves do seu ponteiro:"<<*pont;
}