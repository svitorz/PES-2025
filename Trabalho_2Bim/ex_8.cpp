#include<iostream>
#include <iomanip>

#define X 4
#define Y 5

using namespace std;

int matriz[X][Y];
float media[X][Y];

int main(){
  float aux;
  for (int i = 0; i < X; i++) { 
    for (int j = 0; j < Y; j++) {
      cout << "Digite um valor para a posição " << i+1 <<", " << j+1 << " da matriz:";
      cin >> aux;
      matriz[i][j] = aux;
      media[i][j] = aux / 2;
    }
  }
  cout << "Os valores da matriz são:"<<endl;
  for (int i = 0; i < X; i++) { 
    for (int j = 0; j < Y; j++) {
      if (j != 0) {
        cout << setw(5);
      }
      cout << matriz[i][j];
    }
    cout << endl;
  }
  cout << "A matriz com os valores resultantes:"<<endl;
  for (int i = 0; i < X; i++) { 
    for (int j = 0; j < Y; j++) {
      if (j != 0) {
        cout << setw(5);
      }
      cout << media[i][j];
    }
    cout << endl;
  }
  return 0;
}
