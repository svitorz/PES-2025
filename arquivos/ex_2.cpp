#include <iostream>
#include <fstream>

using namespace std;

int main(){
  char nome[20];
  ofstream nomes;

  nomes.open("nomes.txt", ios::app);
  if(nomes.is_open()){
    for (int i = 0; i <= 10; i++) {
      cout << "Insira um nome" << endl;
      cin >> nome;
      nomes << nome;
      nomes.close();
    }
  }else{
      cout << "Erro ao salvar nomes";
  }
  return 0;
}
