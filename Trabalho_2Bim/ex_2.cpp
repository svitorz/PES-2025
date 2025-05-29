#include <iostream>
#define max 8
#define multiple 3

int nums[max];
int multiples = 0;

using namespace std;

bool isMultiplyOf(int n);

void getMultiples(int value, int index);

void printResults();

int main(){
  int i, aux;

  for (i = 0; i < max; i++) {
    cout << "Insira o "<< i+1 << " º número inteiro:";
    cin >> aux;
  
    getMultiples(aux, i); 
  }
  printResults();
  return 0;
}

bool isMultiply(int n){
  if(n % multiple == 0) {
    return true;
  }
  
  return false;
}

void getMultiples(int value, int index){
  nums[index-1] = value;

  if (isMultiply(value)) {
    multiples++; 
  }
}

void printResults(){
  cout << "Os valores digitados são: ";
  for (int num : nums) {
    cout << num << " - ";
  }
  cout << endl;

  cout << "Foram digitados " << multiples << " números múltiplos de " << multiple << endl;
}
