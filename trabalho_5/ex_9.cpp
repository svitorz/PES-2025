#include <iostream>

using namespace std;

int main(){ 
  uint n;
  cout << "Insira um numero inteiro e positivo: " << endl;
  cin >> n;

  if(n % 2 == 0){
    cout << "O numero inserido e par" << endl;
    return 0;
  }  
  cout << "O numero inserido e impar" << endl;
  return 0;
}
