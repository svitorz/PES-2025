#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Insira tres numeros inteiros" << endl;
    cin >> num1 >> num2 >> num3;

    if(num1 > num2){
        cout <<"Numero 1 e maior que o numero 2";
    }else {
        cout <<"Numero 2 e maior que o numero 1";
    }

    if(num1 != num3){
            cout << "Numero 1 e diferente do numero 3";
    }else{
        count << "numero 1 e 3 sao iguais";
    }
    return 0;
}
