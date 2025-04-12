#include <iostream>
using namespace std;

int main () {

    int vetA[10], x, vetM[10];

        for (int i = 0; i < 10; i++)
        {
            cout << "Digite o " << i + 1 << "º numero: ";
            cin >> vetA[i];

        }

            cout << "Digite mais um numero: ";
            cin >> x;
        
        for (int i = 0; i < 10; i++)
        {
            vetM[i] = vetA[i] * x;
            cout << "A multiplicação de " << x << " por " << vetA[i] << " é: "
            << vetM[i] << endl;
        }






}

