#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int vetor[TAM];         // Declaração do vetor
    int* ptr;               // Ponteiro que usaremos para percorrer o vetor

    // Entrada de dados
    cout << "Digite 10 números inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Impressão na ordem normal usando ponteiros
    cout << "\nValores na ordem normal:" << endl;
    ptr = vetor; // ptr aponta para o primeiro elemento do vetor
    for (int i = 0; i < TAM; i++) {
        cout << *(ptr + i) << " "; // acessa o valor usando aritmética de ponteiros
    }

    // Impressão na ordem inversa usando ponteiros
    cout << "\n\nValores na ordem inversa:" << endl;
    ptr = vetor + TAM - 1; // ptr agora aponta para o último elemento do vetor
    for (int i = TAM - 1; i >= 0; i--) {
        cout << *ptr << " ";
        ptr--; // vai voltando um elemento na memória
    }

    cout << endl;
    return 0;
}