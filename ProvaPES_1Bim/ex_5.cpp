#include <iostream>

using namespace std;

int main(){
  int steps = 50;
  uint lower;
  uint higher = 0;
  uint n;
  for(int i = 0; i <= steps; i++){
    cout << "Insira um número inteiro e positivo: ";
    cin >> n;
    if (i == 0) {
      lower = n;
    }
    if(n < lower){
      lower = n;
    }

    if(n > higher){
      higher = n;
    }
  }

  cout << "O menor numero inserido foi " << lower << " e o maior foi " << higher << endl;
  return 0;
}
