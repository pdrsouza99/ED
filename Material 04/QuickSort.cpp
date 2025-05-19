#include <iostream>
using namespace std;

// Função para particionar o vetor e retornar o índice do pivô
int particionar(int arr[], int inicio, int fim) {
    int pivo = arr[fim]; // Pivô escolhido como o último elemento
    int i = inicio - 1;  // Índice do menor elemento

    for (int j = inicio; j < fim; j++) {
        if (arr[j] <= pivo) {
            i++;
            // Troca arr[i] e arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // Coloca o pivô na posição correta
    int temp = arr[i + 1];
    arr[i + 1] = arr[fim];
    arr[fim] = temp;

    return i + 1; // Retorna o índice do pivô
}

// Função recursiva que implementa o Quick Sort
void quickSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int pivoIndice = particionar(arr, inicio, fim);

        // Ordena elementos antes do pivô
        quickSort(arr, inicio, pivoIndice - 1);

        // Ordena elementos depois do pivô
        quickSort(arr, pivoIndice + 1, fim);
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
    int numeros[] = {10, 7, 8, 9, 1, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Vetor original: ";
    imprimirVetor(numeros, tamanho);

    quickSort(numeros, 0, tamanho - 1);

    cout << "Vetor ordenado (crescente): ";
    imprimirVetor(numeros, tamanho);

    return 0;
}