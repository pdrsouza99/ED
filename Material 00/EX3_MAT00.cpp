#include <iostream>

using namespace std;

int main()
{
    float numHoras, salMin, salReceber;
    float horasTrab, salBruto, imposto;

    cout << "Digite o numero de horas trabalhadas: ";
    cin >> numHoras;
    cout << "Digite o valor do salario minimo: ";
    cin >> salMin;

    horasTrab = salMin / 2;
    salBruto = numHoras * horasTrab;
    imposto = salBruto * 3/100;
    salReceber = salBruto - imposto;

    cout << "Salario Bruto: " << "$ " << salBruto << endl;
    cout << "Salario a receber: " <<"$ " << salReceber << endl;

    return 0;
}