#include <iostream>
using namespace std;

// Função para ordenar o vetor usando Bubble Sort (crescente)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i -1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j +1] = temp;
            }
        }
    }
}

int main() {
    const int tamanho = 10;
    int numeros[tamanho];

    // Entrada dos números
    cout << "Digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
    }

    // Ordena o vetor
    bubbleSort(numeros, tamanho);

    // Menor número é o primeiro após ordenação
    int menor = numeros[0];
    int contMenor = 0;
    // Maior número é o último após ordenação
    int maior = numeros[tamanho - 1];
    int contMaior = 0;

    // Contar quantas vezes aparecem menor e maior
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] == menor) contMenor++;
        if (numeros[i] == maior) contMaior++;
    }

    // Exibir resultados
    cout << "\nMenor numero: " << menor << " (aparece " << contMenor << " vezes)" << endl;
    cout << "Maior numero: " << maior << " (aparece " << contMaior << " vezes)" << endl;

    return 0;
}