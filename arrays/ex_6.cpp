#include <iostream>
#include <locale>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int n, i;

  cout << "Quantos produtos você quer lançar?" << endl;
  cin >> n;

  float produtos[n], soma = 0.0;

  for (i = 0; i < n; i++) {
    cout << "Digite o preço do produto: " << endl;
    cin >> produtos[i];
    soma += produtos[i];
  }

  cout << "\nO preço total da compra foi: " << soma << endl;
  return 0;
}
