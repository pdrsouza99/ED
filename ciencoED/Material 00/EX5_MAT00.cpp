#include <iostream>

using namespace std;

int main()
{
    float preco,reajuste = 0;
    int opcao;

    cout << "Entre com o valor da etiqueta do produto: " << endl;
    cin >> preco;

    cout << "Escolha a opcao de pagemento: " << endl;
    cout << "1 -> A vista em dinheiro ou cheque, com 10% de desconto." << endl;
    cout << "2 -> A vista no cartao de credito, com 5% de desconto." << endl;
    cout << "3 -> Em 2x, preco normal da etiqueta sem juros." << endl;
    cout << "4 -> em 3x, preco da etiqueta com acrescimo de 10%." << endl;

    cout << "Entre com a opcao de pagamento: " << endl;
    cin >> opcao;

    switch (opcao) {

      case 1:
        reajuste = preco * 10/100;
        break;

      case 2:
        reajuste = preco * 5/100;
        break;

      case 3:
        break;

      case 4:
        reajuste = preco * 10/100;
        break;

      default:
        cout << "Opcao invalida.";
        break;
    }
   if (opcao == 1 | opcao == 2 | opcao == 3) {
     cout << "O valor a ser pago e : R$ " << preco + reajuste;
   }
   else if (opcao == 4){
     cout << "O valor a ser pago e: R$ " << preco - reajuste;
   }

   else {
     cout << " Entre com outro valor" << endl;
   }

    return 0;
}