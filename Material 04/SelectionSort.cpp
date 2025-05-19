#include <iostream>
using namespace std;

// Função de ordenação Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int indiceMin = i; // Assume que o menor elemento é o da posição i

        // Encontra o índice do menor elemento no restante do vetor
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[indiceMin]) {
                indiceMin = j;
            }
        }

        // Troca o menor elemento encontrado com o elemento da posição i
        if (indiceMin != i) {
            int temp = arr[i];
            arr[i] = arr[indiceMin];
            arr[indiceMin] = temp;
        }
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
    int numeros[] = {64, 25, 12, 22, 11};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Vetor original: ";
    imprimirVetor(numeros, tamanho);

    selectionSort(numeros, tamanho);

    cout << "Vetor ordenado (crescente): ";
    imprimirVetor(numeros, tamanho);

    return 0;
}