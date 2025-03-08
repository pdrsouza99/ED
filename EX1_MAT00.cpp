#include <iostream>

using namespace std;

int main()
{
    float peso, altura, imc;

    cout << "Digite seu peso: " << endl;
    cin >> peso;

    cout << "Digite sua altura: " << endl;
    cin >> altura;

    imc = peso / (altura * altura);

    if (imc < 20 ){
        cout << "Abaixo do Peso !" << endl;
    } 
    else if (imc >= 20 & imc <25 ){
        cout << "Peso ideal !" << endl;
    }
    else{
        cout << "Acima do peso !" <<endl;
    }
}