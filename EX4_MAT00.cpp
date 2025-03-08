#include <iostream>

using namespace std;

int main()
{
    float salAtual, reajuste;

    cout << "Digite seu salario: ";
    cin >> salAtual;

    if (salAtual <= 1000) {
      reajuste = salAtual * 15/100;
    }
    else if (salAtual <= 1500) {
      reajuste = salAtual * 10/100;
    }
    else {
      reajuste = salAtual * 5/100;
    }

    cout << "O seu novo salario e: R$ " << salAtual + reajuste;

    return 0;
}