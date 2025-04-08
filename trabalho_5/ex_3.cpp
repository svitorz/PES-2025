#include<iostream>
#include<cmath>
#include <locale>
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese")
    const float PI = 3.14;
    float radius;
    cout << "Por favor, insira o valor do raio:" <<endl;
    cin >> radius;
    
    float perimeter = 2 * PI * radius;
    float area = PI * pow(2,radius);
    cout << "Com base no raio fornecido, o perímetro deste circulo é " << perimeter << endl;
    cout << "E a area é " << area << endl; 
    return 0;
  }
