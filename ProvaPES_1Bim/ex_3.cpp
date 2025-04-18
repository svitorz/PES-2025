#include <iostream>

using namespace std;

int main(){
  char productName[30];
  float price; 
  int paymentMethod;
  cout << "Qual é o produto? ";
  cin >> productName;

  cout << "Qual o valor do produto: ";
  cin >> price;

  cout << "De acordo com o menu abaixo, informe como deseja pagar:" << endl;
  cout << "1 - Pagamento a vista (10% de desconto)." << endl;
  cout << "2 - Pagamento com 30 dias de prazo (sem desconto)." << endl;
  cout << "3 - pagamento com 10x (Cartão de Crédito - sem desconto - sem acréscimo)" << endl;
  cout << "4 - Pagamento em 10x (Boleto - 10% de acréscimo)" << endl;
  cin >> paymentMethod;
  switch (paymentMethod) {
    case 1:
      price = (price * (9.0/10));
      cout << "O valor do produto com desconto é " << price <<  "." << endl;
      break;
    case 2:
      cout << "O valor para pagamento com 30 dias é " << price << endl;
      break;
    case 3:
      cout << "O valor do produto em 10x no cartão é " << price << " com cada parcela com valor de " << price/10 << endl;
      break;
    case 4: 
      cout << "O valor do produto em 10x no boleto é " << (price *(11.0/10.0)) << " com parcelas de " << ((price *(11.0/10.0)) / 10)  << endl;
      break;
  default:
      cout << "Opção inválida.";   
      break;
  }
  return 0;
}
