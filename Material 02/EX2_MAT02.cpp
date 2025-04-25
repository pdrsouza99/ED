#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struct para armazenar os dados de um livro
struct Livro {
    string titulo;
    string autor;
    int ano;
};

int main() {
    vector<Livro> biblioteca;
    string tituloParar = "FIM";

    while (true) {
        Livro livro;

        cout << "Digite o título do livro (ou \"" << tituloParar << "\" para encerrar): ";
        getline(cin, livro.titulo);

        // Verifica se é o título de parada
        if (livro.titulo == tituloParar) {
            break;
        }

        cout << "Digite o autor do livro: ";
        getline(cin, livro.autor);

        cout << "Digite o ano de publicação: ";
        cin >> livro.ano;
        cin.ignore(); // Limpa o buffer

        biblioteca.push_back(livro);
        cout << "Livro registrado com sucesso!\n\n";
    }

    // Exibe os livros registrados
    cout << "\nLista de livros registrados:\n";
    for (const auto& livro : biblioteca) {
        cout << "Título: " << livro.titulo << endl;
        cout << "Autor: " << livro.autor << endl;
        cout << "Ano: " << livro.ano << endl;
        cout << "---------------------------\n";
    }

    return 0;
}
