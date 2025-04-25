#include <iostream>
#include <string>

using namespace std;

const int MAX_ESTUDANTES = 100; // Número máximo de estudantes

// Struct para armazenar os dados do estudante
struct Estudante {
    string nome;
    float notaFinal;
    string situacao;
};

int main() {
    Estudante estudantes[MAX_ESTUDANTES];
    int contador = 0;
    char continuar;

    do {
        if (contador >= MAX_ESTUDANTES) {
            cout << "Limite máximo de estudantes atingido.\n";
            break;
        }

        cout << "Digite o nome do estudante: ";
        getline(cin, estudantes[contador].nome);

        cout << "Digite a nota final do estudante: ";
        cin >> estudantes[contador].notaFinal;
        cin.ignore(); // Limpa o buffer

        // Determina a situação do estudante
        if (estudantes[contador].notaFinal >= 6.0) {
            estudantes[contador].situacao = "Aprovado";
        } else {
            estudantes[contador].situacao = "Reprovado";
        }

        contador++;

        cout << "Deseja inserir outro estudante? (s/n): ";
        cin >> continuar;
        cin.ignore(); // Limpa o buffer

        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    // Exibe os dados dos estudantes
    cout << "\nDesempenho dos estudantes:\n";
    for (int i = 0; i < contador; i++) {
        cout << "Nome: " << estudantes[i].nome << endl;
        cout << "Nota Final: " << estudantes[i].notaFinal << endl;
        cout << "Situação: " << estudantes[i].situacao << endl;
        cout << "---------------------------\n";
    }

    return 0;
}
