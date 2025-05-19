#include <iostream>
using namespace std;

void bubbleSortV3(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        bool trocou = false;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = true;
            }
        }
        if (!trocou)
            break; // Já está ordenado
    }
}
