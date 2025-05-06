#include<iostream>
#include<locale>

using namespace std;

int main(){
  setlocale(LC_ALL,"Portuguese");
  int num = 5;
  char vetor[num];

  for (int i = 0; i < num; i++) {
    cout << "Digite uma letra:" << endl;
    cin >> vetor[i];
  }

  for (int i = 0; i < num; i++) {
    cout << "A letra armazenada na posição " << (i) << " do vetor é: " << vetor[i] << endl; 
  }

  cout << "O valor do vetor é de: " << vetor << endl;
  cout << "O valor da segunda posição do vetor é " << vetor[1] << endl;
  
}
