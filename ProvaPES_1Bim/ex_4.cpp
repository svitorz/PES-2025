#include <iostream>

using namespace std;

int main(){
  int validPassword = 1234;
  int inputPassword;

  cout << "Digite sua senha:" << endl;
  cin >> inputPassword;

  if(inputPassword != validPassword){
    cout << "ACESSO NEGADO." << endl;
    return 1;
  }

  cout << "ACESSO PERMITIDO." << endl;
  return 0;
}
