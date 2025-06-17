#include <iostream>

using namespace std;

int main(){
  int x = 10;

  int *y;

  y = &x;

  cout << "x = " << x << endl;
  cout << "y = " << y << endl;
  //Imprimir o valor, e não o endereço de memória
  cout << "&y = " << *y << endl; // printa 10
  return 0;
}

