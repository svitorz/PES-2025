#include <iostream>
#include <cctype>

using namespace std;

int main(){
  char gender;
  float height;
  cout << "Insira seu genero: " << endl;
  cin >> gender;
  gender = toupper(gender);
  cout << "Insira sua altura em centimetros: " << endl;
  cin >> height;
  height /= 100;
  float ideal;
  
  switch(gender){
    case 'F':
      ideal = (62.1*height)-44.7;
      break;
    case 'M':
      ideal = (72.7*height)-58;
      break;
    default: 
      cout << "Valor inserido não aceito pelo sistema.";
      break;
  }

  cout << "Seu peso ideal de acordo com sua altura é " << ideal << endl;
  return 0;    
}
