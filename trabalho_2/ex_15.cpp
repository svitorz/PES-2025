#include<iostream>

using namespace std;

int main() {
  int number;
  cout << "Insira um numero, positivo ou negativo." << endl;
  cin >> number;

  if(number >= 0){
    cout << "O numero e positivo." << endl;
  }else{
    cout << "O numero e negativo." << endl;
  }
}
