#include <iostream>

using namespace std;

int main()
{
    float num1, num2,num3, soma, sub, mult, div;
    int num4,num5, resto;

    cout << "Insira um numero com casas decimais: " << endl;
    cin >> num1 >> num2 >> num3;

    cout << "Insira um numero inteiro:" << endl;
    cin >> num4 >> num5;

    soma = num1 + num2 + num3 + num4 + num5;
    cout << "A soma de todos os números é " << soma << endl;

    sub = num1 - num2 - num3 - num4 - num5;
    cout << "A subtracao de todos os numeros é: " << sub << endl;

    mult = num1 * num2 * num3 * num4 * num5;
    cout << "A multiplicacao de todos os numeros é " << mult << endl;

    div = num5 / num1;
    cout << "A divisao do quinto numero pelo primeiro é " << div <<endl;

    resto = num4 % num5;
    cout << "O resto da divisao do quarto numero pelo quinto é" << resto << endl;
    return 0;
}
