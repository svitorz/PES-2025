#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, numero3, resultadoParcial,resultadoFinal;
    cout << "Insira o primeiro valor a ser somado:\n";
    cin >> numero1;
    cout << "Insira o segundo valor a ser somado:\n";
    cin >> numero2;
    resultadoParcial = numero1 + numero2;
    cout << "Digite o terceiro número a ser somado:\n";
    cin >> numero3;
    resultadoFinal = resultadoParcial + numero3;
    cout << "O valor da soma é " << resultadoFinal;
    return 0;
}
