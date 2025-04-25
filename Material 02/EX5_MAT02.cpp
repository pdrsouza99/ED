#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struct para armazenar os dados de um pedido
struct Pedido {
    string nomePrato;
    int quantidade;
    float precoTotal;
};

int main() {
    vector<Pedido> pedidos;
    const float PRECO_PARAR = -1.0;

    while (true) {
        Pedido p;

        cout << "Digite o nome do prato: ";
        getline(cin, p.nomePrato);

        cout << "Digite a quantidade: ";
        cin >> p.quantidade;

        cout << "Digite o preço total do pedido (ou " << PRECO_PARAR << " para encerrar): ";
        cin >> p.precoTotal;
        cin.ignore(); // Limpa o buffer

        if (p.precoTotal == PRECO_PARAR) {
            break;
        }

        pedidos.push_back(p);
        cout << "Pedido registrado com sucesso!\n\n";
    }

    // Exibe os pedidos registrados
    cout << "\nPedidos registrados:\n";
    for (const auto& pedido : pedidos) {
        cout << "Prato: " << pedido.nomePrato << endl;
        cout << "Quantidade: " << pedido.quantidade << endl;
        cout << "Preço Total: R$ " << pedido.precoTotal << endl;
        cout << "---------------------------\n";
    }

    return 0;
}
