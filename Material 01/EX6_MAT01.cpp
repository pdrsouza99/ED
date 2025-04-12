#include <iostream>
using namespace std;

int main ()
{
    int vetordias[5], contmedia = 0;
    float maior, menor, soma = 0, media = 0;

        for (int i = 0; i < 5; i++)
        {
            cout << "Digite a temperatura do " << i + 1<< "º dia: ";
            cin >> vetordias[i];

            soma += vetordias[i];
        }

        media = soma / 5;
        maior = vetordias[0];
        menor = vetordias[0];

        for (int i = 0; i < 5; i++)
        {
            if (vetordias[i] < menor)
            {
                menor = vetordias[i];
            }
        }

        for (int i = 0; i < 5; i++)
        {
            if (vetordias[i] > maior)
            {
                maior = vetordias[i];
            }
        }

        for (int i = 0; i < 5; i++)
        {
            if (vetordias[i] < media)
            {
                contmedia += 1;
            }
        }


        

        
        //system ("clear") ;

        cout << "A menor temperatura do ano foi: " << menor << "º G."<< endl;
        cout << "A maior temperatura do ano foi: " << maior << "º G." << endl;
        cout << "A média de anual foi de: " << media << "º G." << endl;
        cout << "Quantidade de dias em que temperatura foi inferior a média anual: " << contmedia << endl;


}