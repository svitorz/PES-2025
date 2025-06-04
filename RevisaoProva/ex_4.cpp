#include<iostream>

using namespace std;

float getProfit(float cost, float price, int quantity);

int main(){
  cout << "Programa para cadastrar Produtos e calcular Lucro." << endl;

  int nProd = 0;

  cout << "Quantos produtos você vai cadastrar? ";
  cin >> nProd;

  if(nProd <= 0){
    return 1;
  }

  struct Produto {
    int codProd, quantity;
    float cost, price;
  } strProd[nProd];

  for (int  i = 0; i < nProd; i++) {
    cout << "Informe o código do produto: ";
    cin >> strProd[i].codProd;
    cout << "Informe o preço de custo do produto: ";
    cin >> strProd[i].cost;
    cout << "Informe o preço  de venda do produto: ";
    cin >> strProd[i].price;
    cout << "Informe a quantidade em estoque do produto: ";
    cin >> strProd[i].quantity;
    cout << "O produto: " << strProd[i].codProd << " pode gerar R$" << getProfit(strProd[i].cost, strProd[i].price, strProd[i].quantity) << " de lucro" << endl;
  }
  return 0;
}

float getProfit(float cost, float price, int quantity){
  return (price - cost) * quantity;
}
