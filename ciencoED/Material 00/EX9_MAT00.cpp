#include <iostream>

using namespace std;

int main()
{
    float altura[10] = {1.67, 1.55, 1.70, 1.72, 1.80, 1.87, 1.92, 1.49, 1.65, 1.88};
    float maiorAluno = altura[0], menorAluno = altura[0];
    int numeroAluno,numMenorAluno;


    for (int i=0; i < 10; i+=1) {

      cout << "Aluno " <<  i + 1 << " ->" << "Altura: " << altura[i]<< " m."<<endl;

       if (altura[i] > maiorAluno) {

         maiorAluno = altura[i];
         numeroAluno = i+1;

       }

       else if (altura[i] < menorAluno) {

         menorAluno = altura[i];
         numMenorAluno = i+1;

       }
     }
     cout<<endl;
     cout << "O aluno "<<numeroAluno<<" e o mais alto. Altura: " <<maiorAluno<<" m"<<endl;
     cout << "O aluno "<<numMenorAluno<<" e o mais baixo. Altura: " <<menorAluno<<" m"<<endl;
    return 0;
}