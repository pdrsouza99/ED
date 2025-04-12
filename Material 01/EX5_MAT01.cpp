#include <iostream>
using namespace std;

int main ()
{
    int n, soma;
    int veta[n], vetb[n];

    cout << "Digite o tamanho do vetor: "; 
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << "º numero: ";
        cin >> veta[n];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Digite o " << "º numero: ";
        cin >> vetb[n];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Vetor A: " << veta[n] << " " << endl;
        cout << "Vetor B: " << vetb[n] << " " << endl;
    }
}