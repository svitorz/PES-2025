#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int num1, num2, bigger;
  cout << "Insira dois numeros: " << endl;
  cin >> num1 >> num2;
  bigger = max(num1,num2);
  cout << "O maior numero entre os inseridos e: " << bigger << endl;
}
