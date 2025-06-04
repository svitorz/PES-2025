#include <iostream>

using namespace std;

int main(){
  int nProd = 0;
  float valorTotal = 0;
  cout << "Quantos produtos você vai lançar?";
  cin >> nProd;

  float aux;
  for(int i = 0; i< nProd; i++){
    cout << "Digite o preço do produto " << i + 1 << ":";
    cin >> aux;
    valorTotal += aux;
  }

  cout << "O preço total da compra foi: " << valorTotal << endl;
  return 0;
}
