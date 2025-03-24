#include <iostream>
using namespace std;

int main(){
  float fahrenheit, celsius;
  cout << "Cálculo de temperatura." << endl;
  cout << "Insira a temperatura em Fahrenheit:" <<endl;
  cin >> fahrenheit;
  celsius = ((fahrenheit - 32) * (5.0/9.0));
  cout << "A temperatura em Celsius é " << celsius << endl;
  return 0;
}
