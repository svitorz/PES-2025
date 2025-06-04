#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  int size = 0;

  cout << "Insira um valor para N - tal que N seja o tamanho de um vetor de duas dimensões:";
  cin >> size;
  if(size <= 0){
    return 1;
  }

  int vector[size][size];

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << "Insira um valor para a posição " << i+1 << ", " << j+1 << " da matriz:";
      cin >> vector[i][j];
    }
    cout << endl;
  }

  cout << "Os valores da matriz são:" << endl;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << vector[i][j] << setw(5);
    }
    cout << endl;
  }

  cout << "Os valores da matriz sem a primeira linha e primeira coluna são:" << endl;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if(i!=0 && j!=0){
        cout << vector[i][j] << setw(5);
      }
    }
    cout << endl;
  }

  return 0;
}
