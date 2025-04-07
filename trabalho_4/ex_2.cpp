#include<iostream>
#include<clocale>
#include <cctype>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");

    char opc;
    int num1 = 0, num2 = 0;
    
    cout << "Insira qual operação você deseja realizar:" << endl;
    cout << "S - Para somar" << endl << "N - Para subtrair" << endl << "M - Para multiplicar" << endl << "D - Para dividir" << endl;
    cin >> opc;
    opc = toupper(opc);
    
    cout << "Agora, insira dois números inteiros:" << endl;
    cin >> num1 >> num2;


    switch(opc){
        case 'S':
          cout << num1 + num2;
          break;
        case 'N':
          cout << num1 - num2;
          break;
          case 'M':
            cout << num1 * num2;
            break;
          case 'D':
            if(num1 == 0 || num2 == 0 || num1 < num2)
              cout << "Operação inválida";
              break;
            cout << num1 / num2;
            break;
          default: 
            "Operação inválida";
            break;
      }
    return 0;
}
