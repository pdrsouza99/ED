#include <iostream>

using namespace std;

int main() {
    int op = -1, idade;  // Inicializando 'op' para garantir entrada no loop
    float otimo = 0, bom = 0, regular = 0, ruim = 0; // Inicializando contadores
    int totVotos = 0;
    int mediaidade = 0, contidade = 0;

    while (op != 0) {
        cout << "Digite sua idade: ";
        cin >> idade;
        
        if (idade > 0) {
            
            mediaidade = mediaidade + idade;
            contidade += 1;

            cout << "\nAvalie o filme:\n";
            cout << "1 -> Ótimo!\n";
            cout << "2 -> Bom!\n";
            cout << "3 -> Regular!\n";
            cout << "4 -> Ruim!\n";
            cout << "0 -> Sair\n";

            cout << "Dê sua opinião: ";
            cin >> op;
            cout << endl;

            switch (op) {
                case 1:
                    otimo += 1;
                    totVotos += 1;
                    break;
                case 2:
                    bom += 1;
                    totVotos += 1;
                    break;
                case 3:
                    regular += 1;
                    totVotos += 1;
                    break;
                case 4:
                    ruim += 1;
                    totVotos += 1;
                    break;
                case 0:
                    cout << "Obrigado por votar!" << endl;
                    break;
                default:
                    cout << "Opção inválida! Vote novamente!" << endl;
            }
        } else {
            cout << "Idade inválida, digite novamente." << endl;
        }
    }

    // Exibir resultados após saída do loop
    cout << "\nResultados da votação:\n";
    cout << "Ótimo: " << ((otimo / totVotos) * 100) << endl;
    cout << "Bom: " << ((bom / totVotos) * 100) << endl;
    cout << "Regular: " << ((regular / totVotos) * 100)  << endl;
    cout << "Ruim: " << ((ruim / totVotos) * 100) << endl;
    cout << "Total de votos: " << totVotos << endl;
    cout << "Media da idade: " << mediaidade / contidade ;



    return 0;
}
