#include <iostream>
using namespace std;

void bubbleSortV1(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int numeros[] = {5, 2, 9, 1, 5, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    bubbleSortV1(numeros, tamanho);
    cout << "Ordenado (V1): ";
    printArray(numeros, tamanho);

    return 0;
}
