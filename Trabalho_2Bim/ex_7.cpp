#include <iostream>
#include <iomanip>

int matriz[6][6];

using namespace std;

int main(){
  int aux;
  for (int i = 0; i < 6; i++) { 
    for (int j = 0; j < 6; j++) {
      cout << "Digite um valor para a posição " << i+1 <<", " << j+1 << " da matriz:";
      cin >> aux;
      matriz[i][j] = aux;
    }
  }
  for (int i = 0; i < 6; i++) { 
    for (int j = 0; j < 6; j++) {
      if (j != 0) {
        cout << setw(5);
      }
      cout << matriz[i][j];
    }
    cout << endl;
  }

  for (int i = 0; i < 6; i++) { 
    for (int j = 0; j < 6; j++) {
      cout << setw(5);
      if (i + j == 5) {
        cout << setw((6 - i) * 4);
        cout << matriz[i][j];
      } 
    }
    cout << endl;
  }

}
