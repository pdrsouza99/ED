#include <iostream>
using namespace std;

struct pacientes
{
    string nome;
    int idade;
    string sintoma;
    int parar;
};


int main ()
{
    pacientes p1;

    do 
    {
        cout << "Digite o nome do paciente: ";
        getline (cin, p1.nome);

        cout << "Digite a idade: ";
        cin >> p1.idade;

        cout << "Digite os sintomas: ";
        getline (cin, p1.sintoma);

        cout << "Digite 0 para parar, ou 1 para continuar: "
        cin >> p1.parar;

    }
    while (p1.parar != 0);
}