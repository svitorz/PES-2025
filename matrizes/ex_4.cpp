#include <iostream>
#include <locale>

using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int n,m;
  cout << "Insira o numero de linhas da matriz:";
  cin >> n;
  cout << endl;
  cout << "Agora, insira o numero de colunas da matriz:";
  cin >> m;
  
  int matriz[n][m], soma = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cout << "Insira um valor para [" << i << "," << j <<  "]:";
        cin >> matriz[i][j];
        soma += matriz[i][j];
    }  
  }

  cout << "O valor total da soma da matriz: " << soma;
  return 0;
}
