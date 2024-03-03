//Exercício de arrays:
#include <iostream>
using namespace std;

int main(){
    int num_cores = 5;
    string cores[num_cores] = {"vermelho","verde","azul","amarelo","roxo"};
    int votos[num_cores] = {0};

    cout << "Bem-vindo á votação da cor favorita!\n";

    for(int i=0;i<num_cores;i+=1){
        cout<<"Digite o numero de votos para " << cores[i] << ": ";
        cin >> votos[i];
    }

    cout << "\nresultado da votacao:\n";
    int maxvotos = votos[0];
    string cormaisvotada = cores[0];
    for(int i=1;i<num_cores;i+=1){
        if(votos[i]>maxvotos){
            maxvotos = votos[i];
            cormaisvotada = cores[i];
    }
    }
    cout<< "\n a cor mais votada e:" << cormaisvotada << " " << maxvotos << "\n";
}