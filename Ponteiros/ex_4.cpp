#include <iostream>

using namespace std; 

int main(){
  //ponteiros só podem receber valores de variáveis do mesmo tipo (obviamente)
  int *ponteiro, *ponteiro2, value = 10;
  float valueFloat = 20.0;

  ponteiro = &value;
  cout << "*ponteiro = " << *ponteiro << endl; // deve imprimir 10
  ponteiro2 = ponteiro;
  cout << "*ponteiro2 = " << *ponteiro2 << endl; // deve imprimir 10
  ponteiro = &valueFloat; // erro na compilação
  return 0;
}
