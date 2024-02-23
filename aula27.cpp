#include <iostream>
using namespace std;

class circulo{
    private:
        float raio;
    public:
    circulo(float raioinicial){
        raio = raioinicial;
    }
    float calculaarea(){
        return 3.14*raio*raio;
    }

};
int main(){
    circulo circulo1(5.0);
    cout << "a area do circulo e:" << circulo1.calculaarea() << "\n";
}