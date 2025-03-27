#include <iostream>

using namespace std;

int main(){
  float received, total, taxes, percent = 0.07;
  cout << "Insira seu salario bruto:" << endl;
  cin >> total;
  taxes = total * percent;
  cout <<  "Eu irei pagar R$" << taxes << " de impostos" <<endl;
  received = total - taxes;
  cout << "E recebi R$" << received << " com impostos." << endl;

  return 0;
}
