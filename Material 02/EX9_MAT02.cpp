#include <iostream>

using namespace std;

// Criando typedef para vetor de 5 inteiros
typedef int VetorInteiros[5];

int main() {
    // Declarando e inicializando o vetor
    VetorInteiros numeros = {10, 20, 30, 40, 50};

    // Exibindo os valores do vetor
    cout << "Valores do vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Elemento " << i << ": " << numeros[i] << endl;
    }

    return 0;
}
