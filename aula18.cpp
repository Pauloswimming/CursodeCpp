#include <iostream>
using namespace std;

int soma(int a,int b){
    return a + b;
}
void bomdia(){
    for(int i=0;i<10;i+=1){
        cout << "Bom dia" << "\n";
    }
    
}
int main(){
    bomdia();

    int num1,num2,resultado;
    num1 = 5;
    num2 = 7;
    resultado = soma(num1,num2);

    cout << "Meu num1:" << num1 << "\nMeu num2:" << num2 << "\nresultado:" <<resultado;
}