#include<iostream>
#include<cmath>

using namespace std;

int main(){
  float side, area;
  cout << "Insira o valor de um dos lados do quadrado: " << endl;
  cin >> side;
  area = pow(side, 2.0) / 2;
  cout << "A area do quadrado divida por 2 e igual a: " << area << endl;
  return 0;
}
