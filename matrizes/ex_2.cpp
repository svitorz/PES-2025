#include<iostream>
#include<iomanip>
#include <locale>
using namespace std;

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int m;

  cout << "Insira um valor M para verificar a diagonal (deve ser impar)." << endl;
  cin >> m;

  if (m % 2 == 0 || m <= 1) {
    cout << "Valor inválido para calcular a matriz." << endl;
    return 1;
  }

  int i,j,matriz[m][m];

  for(i = 0; i < m; i++){
    for (j = 0; j < m; j++) {
      cout << "Digite o valor para preencher a matriz [" << i << "," << j << "]:" << endl;
      cin >> matriz[i][j]; 
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < m; j++) {
      if (i != j) {
        cout <<  matriz[i][j] << "\t";
      } else {
        cout << setw(5);
      }
    }
    cout << endl;
  }
  return 0;
}
