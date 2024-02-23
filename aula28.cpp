#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // Tamanho máximo da pilha

class Pilha {
private:
    int dados[MAX_SIZE];
    int topo; // Índice do topo da pilha

public:
    Pilha() {
        topo = -1; // Inicializa o topo como -1 para indicar que a pilha está vazia
    }

    // Adiciona um elemento ao topo da pilha
    void push(int elemento) {
        if (topo == MAX_SIZE - 1) {
            cout << "Erro: Pilha cheia!\n";
            return;
        }
        dados[++topo] = elemento;
    }

    // Remove o elemento do topo da pilha e retorna seu valor
    int pop() {
        if (topo == -1) {
            cout << "Erro: Pilha vazia!\n";
            return -1; // Valor inválido para indicar erro
        }
        return dados[topo--];
    }

    // Retorna o elemento no topo da pilha sem removê-lo
    int top() {
        if (topo == -1) {
            cout << "Erro: Pilha vazia!\n";
            return -1; // Valor inválido para indicar erro
        }
        return dados[topo];
    }

    // Verifica se a pilha está vazia
    bool vazia() {
        return topo == -1;
    }
};

int main() {
    Pilha pilha;

    // Adicionando elementos à pilha
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    // Imprimindo o topo da pilha
    cout << "Topo da pilha: " << pilha.top() << endl;

    // Removendo elementos da pilha
    cout << "Removendo elementos da pilha:\n";
    cout << pilha.pop() << endl;
    cout << pilha.pop() << endl;
    cout << pilha.pop() << endl;

    // Verificando se a pilha está vazia
    if (pilha.vazia()) {
        cout << "Pilha vazia!\n";
    } else {
        cout << "A pilha não está vazia!\n";
    }

    return 0;
}
