#include <iostream>
#include <stdexcept>
#include <cmath>

using namespace std;

float peso, altura;
int numPessoas;
float calcImc(float peso, float altura);

int main(){
  cout << "Quantos IMC's você vai calcular?: ";
  cin >> numPessoas;

  for (int i = 0; i < numPessoas; i++) {
    cout << "Digite o peso:";
    cin >> peso; 

    cout << endl;

    cout << "Digite a altura:";
    cin >> altura;

    cout << endl;

    cout << "O IMC é: " << calcImc(peso, altura);
    cout << endl; 
  }
  return 0;
}

float calcImc(float peso, float altura){
  if(peso == 0 || altura == 0){
    throw runtime_error("Divisão por zero.");
  }

  return peso / pow(altura,2);
}
