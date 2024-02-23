#include <iostream>
using namespace std;

int main(){
    int tamanho;
    cout << "Digite o tamanho do vetor:";
    cin >> tamanho;
    cout << "\n";

    int* vetor = new int[tamanho];
    for(int i=0;i<tamanho;i+=1){
        cout << "Digite o elemento " << i << " do vetor:" << endl;
        cin >> vetor[i];
    }

    for(int i=0;i<tamanho;i+=1){
        cout << vetor[i] << " ";
    }

    cout << "\n";

    delete [] vetor;
    
}