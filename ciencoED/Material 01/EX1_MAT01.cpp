#include <iostream>
using namespace std;

int main () 

{
    string nome[10], rastreador;
    int contadornome = 0;

    for (int i = 0; i < 10; i++) 
    {
        cout << i + 1  << "-" << "Digite seu nome: ";
        cin >> nome[i];
    }

    cout << "Verifique se está na lista: ";
    cin >> rastreador;

    for (int i = 0; i < 10; i++)
    {
        if (nome[i] == rastreador)
        {
            contadornome += 1;
        }
    }

        if (contadornome > 0) 
        {
            cout << "Achei, está na lista !" << endl;
        }
        else 
        {
            cout << "Não achei." <<endl;
        }

}