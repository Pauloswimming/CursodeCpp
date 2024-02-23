#include <iostream>
using namespace std;

class Pilha {
private:
    static const int max = 5;
    int dados[max];
    int topo;

public:
    Pilha() {
        topo = -1;
    }

    void push(int elemento) {
        if (topo == max - 1) {
            cout << "Erro: Pilha cheia!\n";
            return;
        }
        dados[++topo] = elemento;
    }

    int pop() {
        if (topo == -1) {
            cout << "Erro: Pilha vazia!\n";
            return -1;
        }
        return dados[topo--];
    }

    int top() {
        if (topo == -1) {
            cout << "Erro: Pilha vazia!\n";
            return -1;
        }
        return dados[topo];
    }

    bool vazia() {
        return topo == -1;
    }
};

int main(){
    Pilha pilha;
    
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    cout << "Topo da pilha:" << pilha.top() << "\n";

    cout << "Removendo elementos da pilha" << "\n";

    cout << pilha.pop() << "\n";
    cout << pilha.pop() << "\n";
    cout << pilha.pop() << "\n";

    if(pilha.vazia()){
        cout << "pilha vazia!\n";
    }else{
        cout << "a pilha nao esta vazia\n";
    }

    return 0;
}