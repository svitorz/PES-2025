#include <iostream>
#include <iomanip>

int matriz[4][4];

using namespace std;

int main(){
  int aux;
  for (int i = 0; i < 4; i++) { 
    for (int j = 0; j < 4; j++) {
      cout << "Digite um valor para a posição " << i+1 <<", " << j+1 << " da matriz:";
      cin >> aux;
      matriz[i][j] = aux;
    }
  }
  for (int i = 0; i < 4; i++) { 
    for (int j = 0; j < 4; j++) {
      if (j != 0) {
        cout << setw(5);
      }
      cout << matriz[i][j];
    }
    cout << endl;
  }
}
