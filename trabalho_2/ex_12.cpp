# include <iostream>
# include<cmath>

/**
 * Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. 
 * Considere que a cobertura de tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custa R$ 80,00.
 * Informe ao usuário as quantidades de latas de tinta que serão compradas e o preço total.
 * */
using namespace std;

int main(){
  float meters, quantity, amount, price = 80.0;

  cout << "Por favor, insira a quantidade de metros quadrados da area que ira ser pintada: " << endl;
  cin >> meters;
  quantity = ceil((meters / 3)/18);
  cout << "Voce devera comprar " << quantity << " latas.";
  amount = quantity * price;
  cout << "E pagara um total de " << amount << endl;
  return 0;
}
