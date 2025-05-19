#include <iostream>
using namespace std;

// Função para mesclar dois subarrays ordenados
void merge(int arr[], int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1; // Tamanho do primeiro subarray
    int n2 = fim - meio;        // Tamanho do segundo subarray

    // Criar arrays temporários
    int* esquerda = new int[n1];
    int* direita = new int[n2];

    // Copiar dados para os arrays temporários
    for (int i = 0; i < n1; i++)
        esquerda[i] = arr[inicio + i];
    for (int j = 0; j < n2; j++)
        direita[j] = arr[meio + 1 + j];

    int i = 0, j = 0, k = inicio;

    // Mesclar os arrays temporários de volta ao arr[]
    while (i < n1 && j < n2) {
        if (esquerda[i] <= direita[j]) {
            arr[k] = esquerda[i];
            i++;
        } else {
            arr[k] = direita[j];
            j++;
        }
        k++;
    }

    // Copiar os elementos restantes de esquerda[], se houver
    while (i < n1) {
        arr[k] = esquerda[i];
        i++;
        k++;
    }

    // Copiar os elementos restantes de direita[], se houver
    while (j < n2) {
        arr[k] = direita[j];
        j++;
        k++;
    }

    // Liberar memória
    delete[] esquerda;
    delete[] direita;
}

// Função recursiva que implementa o Merge Sort
void mergeSort(int arr[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;

        // Ordenar a primeira metade
        mergeSort(arr, inicio, meio);

        // Ordenar a segunda metade
        mergeSort(arr, meio + 1, fim);

        // Mesclar as duas metades ordenadas
        merge(arr, inicio, meio, fim);
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
    int numeros[] = {38, 27, 43, 3, 9, 82, 10};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Vetor original: ";
    imprimirVetor(numeros, tamanho);

    mergeSort(numeros, 0, tamanho - 1);

    cout << "Vetor ordenado (crescente): ";
    imprimirVetor(numeros, tamanho);

    return 0;
}