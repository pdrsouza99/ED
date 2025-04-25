#include <iostream>
using namespace std;

// Criação da enumeração Cores
enum Cores {
    Vermelho = 1,
    Verde,
    Azul
};

// Criação do typedef para a enumeração Cores
typedef enum Cores TipoCor;

int main() {
    TipoCor corEscolhida;

    // Exibe as opções de cores para o usuário
    cout << "Escolha uma cor:" << endl;
    cout << "1. Vermelho" << endl;
    cout << "2. Verde" << endl;
    cout << "3. Azul" << endl;

    // Solicita a escolha da cor
    cout << "Digite o número da cor escolhida: ";
    cin >> corEscolhida;

    // Exibe a cor escolhida
    switch (corEscolhida) {
        case Vermelho:
            cout << "Você escolheu a cor Vermelho." << endl;
            break;
        case Verde:
            cout << "Você escolheu a cor Verde." << endl;
            break;
        case Azul:
            cout << "Você escolheu a cor Azul." << endl;
            break;
        default:
            cout << "Escolha inválida!" << endl;
            break;
    }

    return 0;
}
