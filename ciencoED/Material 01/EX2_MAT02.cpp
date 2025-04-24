#include <iostream>
using namespace std;


int main()
{
    int notas[20], contmedia = 0;
    float media = 0;

    for (int i = 0; i < 20; i++)
    {
        cout << "Digite a nota do aluno " << i+1 << ":" ;
        cin >> notas[i];
        media = media + notas[i];
    }

    media = media / 20;

    for (int i = 0; i < 20; i++)
    {
        if (notas[i] > media)
        {
            contmedia += 1;
        }
    }

    cout << "A média de notas dos alunos é: " << media << endl;
    cout << "Qtd de alunos com maior média: " << contmedia << endl;

    

    return 0;
}
