//Estruturas condicionais e operadores lógicos and(&&) e or(||):
#include <iostream>
using namespace std;

int main(){
    if(10 == 10){
        if(10==10){
            cout << "verdadeiro3";
        }
    }else if(10<10){
        cout << "verdadeiro2";
    }else if(10<10){
        cout << "verdadeiro2";
    }else if(10<10){
        cout << "verdadeiro2";
    }else if(10<10){
        cout << "verdadeiro2";
    }else{
        cout << "esse e o ultimo que vai ser rodado";
    }
}