#include <iostream>
#include <string>

using namespace std;

// Definindo a estrutura Endereco
struct Endereco {
    string rua;
    string cidade;
    string cep;
};

// Criando typedef para Endereco
typedef Endereco TipoEndereco;

int main() {
    TipoEndereco endereco;

    // Solicitando os dados ao usuário
    cout << "Digite o nome da rua: ";
    getline(cin, endereco.rua);
    cout << "Digite a cidade: ";
    getline(cin, endereco.cidade);
    cout << "Digite o CEP: ";
    getline(cin, endereco.cep);

    // Exibindo os dados inseridos
    cout << "\n===== ENDEREÇO INSERIDO =====" << endl;
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.cep << endl;

    return 0;
}
