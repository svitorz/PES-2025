#include <iostream>
#include <cctype>

using namespace std;

int main(){
  uint number;
  char response;

  while(response != 'N'){
  cout << "Voce deseja imprimir a tabuada?" << endl;
  cout << "S - Sim. N - Não." << endl;
  cin >> response;
  response = toupper(response); 
  
  cout << "Insira um numero inteiro e positivo entre 1 e 9." << endl;
  cin >> number;
  
  if (number == 0 || number > 9) {
    cout << "Número inválido." << endl;
    break;
    return 1;
  }
  cout << "Tabuada do " << number << endl;
  cout << "******************" << endl;
  for (int i = 1; i <= 10; i++) {
    cout << i << " x " << number << " = " << number*i << endl;
  }
  cout << "******************" << endl;

  } 
  return 0;
}
