#include <iostream>
using namespace std;

class carro{
    public:
    string marca;
    string modelo;
    int ano;

    void mostrarinformacoes(){
        cout << "Marca:" << marca << "\n";
        cout << "Modelo:" << modelo << "\n";
        cout << "Ano:" << ano << "\n";
    }
};

int main(){
    carro meucarro;
    meucarro.marca = "Toyota";
    meucarro.modelo = "Corola";
    meucarro.ano = 2020;

    meucarro.mostrarinformacoes();
}