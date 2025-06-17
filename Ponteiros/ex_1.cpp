#include <iostream>

using namespace std;

int main(){
  int x = 10;

  int *y;

  y = &x;

  cout << "x = " << x << endl;
  cout << "&x = " << &x << endl; // printa um endereço de memória
  cout << "y = " << y << endl;
  
  return 0;
}
