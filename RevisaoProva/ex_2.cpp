#include <iostream>
#define SIZE 5
using namespace std;

int vector[SIZE];

int main(){
  int soma = 0, aux = 0, sameAs4 = 0, higherThanAvegare = 0;
  for (int i = 0; i < SIZE; i++) {   
    cout << "Digite o " << i + 1 << " valor do vetor: ";
    cin >> aux;
    vector[i] = aux;
    soma += aux;
  } 
  int avg = soma / SIZE;
  cout << "A média dos valores digitados é " << avg << endl; 

  for(int value : vector){
    if(value == 4){
      sameAs4++;
    }
    if(value >= avg){
      higherThanAvegare++;
    }
  }
  cout << "No vetor existem: " << sameAs4 << " números iguais a 4 e " << higherThanAvegare << " números maiores que a média." << endl;
  return 0;
}
