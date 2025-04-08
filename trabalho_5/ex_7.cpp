#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  cout << left;
    cout << setw(20) << "Especificação" 
         << setw(10) << "Código" 
         << setw(10) << "Preço" << endl;

    cout << setfill('-') << setw(40) << "-" << setfill(' ') << endl;

    cout << setw(20) << "Cachorro quente" 
         << setw(10) << "100" 
         << setw(10) << "9,20" << endl;

    cout << setw(20) << "Bauru simples" 
         << setw(10) << "101" 
         << setw(10) << "12,00" << endl;

    cout << setw(20) << "Bauru com ovo" 
         << setw(10) << "102" 
         << setw(10) << "13,00" << endl;

    cout << setw(20) << "Hamburger" 
         << setw(10) << "103" 
         << setw(10) << "10,00" << endl;

    cout << setw(20) << "Cheeseburguer" 
         << setw(10) << "104" 
         << setw(10) << "12,00" << endl;

    cout << setw(20) << "Refrigerante Lata" 
         << setw(10) << "105" 
         << setw(10) << "5,00" << endl;

    cout << setw(21) << "Água" 
         << setw(10) << "106" 
         << setw(10) << "3,00" << endl;

    cout << "Para finalizar, digite 0" <<endl;

    float finalPrice = 0;
    int code, quantity = 0;

    cout << "Insira o código do produto que deseja:" <<endl; 
    cin >> code;
    cout << "Agora, insira a quantidade:" <<endl;
    cin >> quantity;

    switch (code) {
      case 100:
        finalPrice = 9.20 * quantity;
        break;
      case 101:
        finalPrice = 12.0 * quantity;
        break;
      case 102:
        finalPrice = 13.0 * quantity;
        break;
      case 103:
        finalPrice = 10.0 * quantity;
        break;
      case 104:
        finalPrice = 12.0 * quantity;
        break;
      case 105:
        finalPrice = 5.0 * quantity;
        break;
      case 106:
        finalPrice = 3.0 * quantity;
        break;
      default:
        cout << "Valor inválido." <<endl; 
        break;
    }

  cout << "O valor pago ao final foi:" << finalPrice << endl;
  return 0;
}
