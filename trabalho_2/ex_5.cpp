#include <iostream>

using namespace std;

int main(){
  float meters, centimeters;
  cout << "Insira a medida em metros:" << endl;
  cin >> meters;

  centimeters = meters * 100;

  cout << "A medida convertida em centimetros e: " << centimeters << endl;

  return 0;
}
