#include <iostream>
using namespace std;

int main ()
{
    int vet[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Digite o " << i + 1<< "º número inteiro: ";
        cin >> vet[i];

    }
        cout << "Ordem normal: ";
    
    for (int i = 0; i < 5; i++) 
    {
        cout << vet[i] << " ";

    }
        cout << " " << endl;
        cout << "Ordem inversa: ";
    
    for (int i = 4; i >= 0; i--)
    {
        cout << vet[i] << " ";
    }
}