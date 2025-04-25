#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Para usar setprecision

using namespace std;

// Struct para armazenar dados de avaliação de um filme
struct Filme {
    string titulo;
    float enredo;
    float atuacao;
    float efeitos;
    float media;
};

int main() {
    vector<Filme> avaliacoes;
    char continuar;

    do {
        Filme f;

        cout << "Digite o título do filme: ";
        getline(cin, f.titulo);

        cout << "Nota para o enredo (0 a 10): ";
        cin >> f.enredo;

        cout << "Nota para a atuação (0 a 10): ";
        cin >> f.atuacao;

        cout << "Nota para os efeitos especiais (0 a 10): ";
        cin >> f.efeitos;

        // Calcula a média das avaliações
        f.media = (f.enredo + f.atuacao + f.efeitos) / 3.0;

        cin.ignore(); // Limpa o buffer

        avaliacoes.push_back(f);

        cout << "Deseja avaliar outro filme? (s/n): ";
        cin >> continuar;
        cin.ignore(); // Limpa o buffer

        cout << endl;
    } while (continuar == 's' || continuar == 'S');

    // Exibe os dados das avaliações
    cout << fixed << setprecision(2); // Formata as médias com 2 casas decimais
    cout << "\nAvaliações registradas:\n";
    for (const auto& filme : avaliacoes) {
        cout << "Título: " << filme.titulo << endl;
        cout << "Enredo: " << filme.enredo << endl;
        cout << "Atuação: " << filme.atuacao << endl;
        cout << "Efeitos Especiais: " << filme.efeitos << endl;
        cout << "Média: " << filme.media << endl;
        cout << "---------------------------\n";
    }

    return 0;
}
