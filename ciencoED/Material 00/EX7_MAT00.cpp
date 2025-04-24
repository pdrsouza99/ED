#include <iostream>

using namespace std;

int main()
{
    int i;
    float resto;

    for (i = 1; i <= 500; i++){

        if (i % 5 == 0){
            resto = i;
            cout << resto << endl;
        }
        
    }
}