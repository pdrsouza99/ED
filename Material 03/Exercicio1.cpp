#include <iostream>
using namespace std;

// Função de ordenação Bubble Sort decrescente com verificação de troca
void bubbleSortDecrescente(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool trocou = false; // Flag para verificar se houve troca

        for (int j = 0; j < n - 1 - i; j++) {
            // Mudança: comparação invertida para ordem decrescente
            if (arr[j] < arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = true;
            }
        }

        // Se não houve troca, o vetor já está ordenado
        if (!trocou) {
            break;
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
    int numeros[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    cout << "Vetor original: ";
    imprimirVetor(numeros, tamanho);

    bubbleSortDecrescente(numeros, tamanho);

    cout << "Vetor ordenado (decrescente): ";
    imprimirVetor(numeros, tamanho);

    return 0;
}