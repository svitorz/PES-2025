#include <iostream>

using namespace std;

int main()
{
  int p = 0x5DC;// em c++, o compilador nao permite associar um ponteiro diretamente, é necessário utilizar uma variável tipo int comum
  cout << "*p = " << p << endl;
  p++;
  cout << "*p = " << p << endl;
  p += 15;
  cout << "*p = " << p << endl;
  p -= 2;
  cout << "*p = " << p << endl;

  return 0;
}
