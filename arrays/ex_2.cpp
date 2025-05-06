#include <iostream>

using namespace std;

int main(){
  setlocale(LC_ALL, "Portuguese");
  int vetor[5], i;

  for (i = 0; i < 5; i++) {
    cout << "Digite um valor para armazenar na posição " << (i) << " do vetor."<<endl;
    cin >> vetor[i];
  }
  cout << *vetor;
  return 0;
}
