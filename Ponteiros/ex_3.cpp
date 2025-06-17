#include <iostream>

using namespace std;

int main(){
  int x = 10;

  int *y;

  y = &x;

  cout << "x = " << x << endl;
  *y = 15;
  cout << "&y = " << *y << endl; // printa o valor equivalente ao endereço de memória (15)
  cout << "x = " << x << endl; // o ponteiro altera o valor relacionado ao endereço na memória, então x também vale 15;
  return 0;
}

