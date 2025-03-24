#include <iostream>
using namespace std;

int main(){
  char nome[20];
  int minutos;
  float kilometros;
  float media;
  cout << "Cálculo de pace." << endl;
  cout << "Insira, primeiramente, seu nome: " << endl;
  cin >> nome;
  cout << "Insira o número de minutos que você gastou no trajeto:" << endl;
  cin >> minutos; 
  cout << "Insira, por fim, a distância (em km) que você percorreu:" << endl;
  cin >> kilometros;
  media = kilometros / minutos;
  cout << "Olá, " << nome << ". Você percorreu " << kilometros << " km em " << minutos << " minutos. Sua velocidade média foi:"<< media << endl;
  return 0;
}
