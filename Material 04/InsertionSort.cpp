#include <iostream>
using namespace std;

// Função de ordenação Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int chave = arr[i]; // Elemento atual que será inserido na parte ordenada
        int j = i - 1;

        // Move os elementos maiores que a chave para a direita
        while (j >= 0 && arr[j] > chave) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insere a chave na posição correta
        arr[j + 1] = chave;
    }
}

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Função principal
int main() {
    int numeros[] = {9, 5, 1, 4, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Vetor original: ";
    imprimirVetor(numeros, tamanho);

    insertionSort(numeros, tamanho);

    cout << "Vetor ordenado (crescente): ";
    imprimirVetor(numeros, tamanho);

    return 0;
}