#include <iostream>

using namespace std;

int main(){

  float nota1, nota2, nota3, nota4, media;

  cout << "Insira as quatro notas do aluno: "<< endl;
  cin >> nota1 >> nota2 >> nota3 >> nota4;
  media = (nota1 + nota2 + nota3 + nota4) / 4;
  cout << "A media do aluno e: " << media << endl;
  return 0;
}
