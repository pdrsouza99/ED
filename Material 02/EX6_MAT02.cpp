#include <iostream>
#include <string>

using namespace std;

// Definindo a estrutura com typedef
typedef struct {
    string nome;
    string endereco;
    string cpf;
    int idade;
} Pessoa;

int main() {
    // Criando um array de 5 pessoas
    Pessoa pessoas[5];

    // Coletando dados das 5 pessoas
    for (int i = 0; i < 5; i++) {
        cout << "Pessoa " << i + 1 << endl;
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);
        cout << "Endereço: ";
        getline(cin, pessoas[i].endereco);
        cout << "CPF: ";
        getline(cin, pessoas[i].cpf);
        cout << "Idade: ";
        cin >> pessoas[i].idade;
        cin.ignore(); // Limpa o buffer do cin antes do próximo getline
        cout << endl;
    }

    // Exibindo os dados das 5 pessoas
    cout << "Dados das pessoas cadastradas:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nPessoa " << i + 1 << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereço: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;
    }

    return 0;
}
