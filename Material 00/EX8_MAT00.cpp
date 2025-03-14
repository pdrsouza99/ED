#include <iostream>

using namespace std;

int main()
{
    int voto,votoCand1=0,votoCand2=0,votoNulo=0,votoBranco=0,totVotos=0;

    while (voto != 0) {

      cout<<"Painel de codigos: "<<endl;
      cout<<"1 -> 1º Candidato."<<endl;
      cout<<"2 -> 2º Candidato."<<endl;
      cout<<"3 -> Voto Nulo."<<endl;
      cout<<"4 -> Voto Branco"<<endl;

      cout << "Entre com o codigo do seu voto: "<<endl;
      cin>>voto;
      cout<<endl;

      switch (voto) {

        case 1:
          votoCand1 = votoCand1 +=1;
          totVotos = totVotos +=1;
          break;
        case 2:
          votoCand2 = votoCand2 +=1;
          totVotos = totVotos +=1;
          break;
        case 3:
          votoNulo = votoNulo +=1;
          totVotos = totVotos +=1;
          break;
        case 4:
          votoBranco = votoBranco +=1;
          totVotos = totVotos +=1;
          break;
        case 0:
          break;
        default: {
          cout<<"Opcao invalida! Vote novamente!"<<endl;
          cout<<endl;
        }
      }
      if (voto == 0){

        cout<<"O percentual de votos para o Candidato 1 foi de: "<<(votoCand1 * 100) / totVotos << " %"<<endl;
        cout<<"O percentual de votos para o Candidato 2 foi de: "<<(votoCand2 * 100) / totVotos << " %"<<endl;
        cout<<"O percentual de votos Nulo foi de: "<<(votoNulo *100) / totVotos << " %"<<endl;
        cout<<"O percentual de votos Branco foi de: "<<(votoBranco * 100) / totVotos << " %"<<endl;

      }
    }
    return 0;
}