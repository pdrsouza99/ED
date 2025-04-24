#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int numeros[TAM];     // Array de 5 inteiros
    int* ptr;             // Ponteiro para percorrer o array
    int soma = 0;

    // Entrada de dados
    cout << "Digite 5 números inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Usando ponteiro para calcular a soma
    ptr = numeros; // Ponteiro aponta para o início do array
    for (int i = 0; i < TAM; i++) {
        soma += *(ptr + i); // acessa o valor e soma
    }

    // Calcula a média
    float media = static_cast<float>(soma) / TAM;

    // Exibe resultado
    cout << "\nA média dos valores é: " << media << endl;

    return 0;
}