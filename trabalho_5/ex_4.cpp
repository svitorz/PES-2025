#include<iostream>
#include <iomanip>
using namespace std;

int main(){ 
  char product[40];
  float value;

  cout << "Insira o nome do produto que deseja calcular o desconto: " << endl;
  cin >> product;

  cout << "Agora, insira o valor original" << endl;
  cin >> value;
  
  const float percent = 0.13;
  float discount = value * percent;
  
  cout << setw(10) << "Produto:" << product <<endl;
  cout << setw(8) << "Valor:" << value << endl;
  cout << setw(11) << "Desconto:" << discount <<endl;
  cout << setw(14) << "Valor Final:" << value - discount << endl;
  return 0; 
}
