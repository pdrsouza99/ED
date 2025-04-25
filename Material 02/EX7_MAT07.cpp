#include <iostream>
#include <string>

using namespace std;

// Definindo a estrutura Animal
struct Animal {
    string nome;
    string especie;
    int idade;
    float peso;
};

// Criando o typedef para ListaAnimais (vetor de 10 animais)
typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais animais; // Vetor para armazenar os 10 animais

    // Entrada de dados
    for (int i = 0; i < 10; i++) {
        cout << "Digite os dados do animal " << i + 1 << ":" << endl;
        cout << "Nome: ";
        getline(cin, animais[i].nome);
        cout << "Espécie: ";
        getline(cin, animais[i].especie);
        cout << "Idade: ";
        cin >> animais[i].idade;
        cout << "Peso (kg): ";
        cin >> animais[i].peso;
        cin.ignore(); // Limpa o buffer do cin antes do próximo getline
        cout << endl;
    }

    // Exibindo os dados
    cout << "===== DADOS DOS ANIMAIS =====" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i + 1 << ":" << endl;
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Espécie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << " anos" << endl;
        cout << "Peso: " << animais[i].peso << " kg" << endl;
    }

    return 0;
}
