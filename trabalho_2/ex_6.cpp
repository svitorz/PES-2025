#include<iostream>
#include<cmath>

using namespace std;

int main(){
  float radius, area;
  cout << "Insira o valor do raio do circulo: " <<endl;
  cin >> radius;
  
  //utilizando a constante PI.
  area = M_PI * pow(radius, 2.0);

  cout << "A area do circulo e " << area << endl;
  return 0;
}
