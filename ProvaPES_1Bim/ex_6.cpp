#include <iostream>

using namespace std;

int main(){
  uint number;

  cout << "Insira um numero inteiro e positivo entre 1 e 9." << endl;
  cin >> number;

  if (number == 0 || number > 9) {
    cout << "Valor inválido. Sistema parando." << endl;
    return 1;
  }
  cout << "Tabuada do " << number << endl;
  cout << "******************" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << i << " x " << number << " = " << number*i << endl;
  }
  cout << "******************" << endl;

  return 0;
}
