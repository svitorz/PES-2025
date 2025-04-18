#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  char nome[20];
  int nIrmaos;
  int idade;
  cout << setw(35) << "Bom dia..." << endl;
  cout << setw(35) << "Qual é o seu nome: ";
  cin >> nome;
  cout << setw(35) << "Quantos irmãos voce tem? ";
  cin >> nIrmaos;
  cout << setw(35) << "Qual é sua idade: ";
  cin >> idade;

  cout << "Então, voce se chama " << nome << ", tem " << nIrmaos << " irmãos, e nasceu em " << 2025-idade << endl;
  return 0;
}
