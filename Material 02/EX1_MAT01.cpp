#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Definição da struct para armazenar dados do paciente
struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    vector<Paciente> pacientes; // Vetor para armazenar múltiplos pacientes
    char continuar;

    do {
        Paciente p;

        cout << "Digite o nome do paciente: ";
        getline(cin, p.nome);

        cout << "Digite a idade do paciente: ";
        cin >> p.idade;
        cin.ignore(); // Limpar o buffer após a entrada de idade

        cout << "Digite o sintoma do paciente: ";
        getline(cin, p.sintoma);

        pacientes.push_back(p);

        cout << "Deseja adicionar outro paciente? (s/n): ";
        cin >> continuar;
        cin.ignore(); // Limpar o buffer após a entrada do caractere

        cout << endl;
    } while (continuar == 's' || continuar == 'S');

    // Exibe os dados dos pacientes registrados
    cout << "\nLista de pacientes registrados:\n";
    for (const auto& paciente : pacientes) {
        cout << "Nome: " << paciente.nome << endl;
        cout << "Idade: " << paciente.idade << endl;
        cout << "Sintoma: " << paciente.sintoma << endl;
        cout << "---------------------------\n";
    }

    return 0;
}
