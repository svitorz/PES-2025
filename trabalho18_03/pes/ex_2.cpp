#include <iostream>
using namespace std;

int main(){
  char nome[20];
  int nota1, nota2, nota3;
  int media;
  cout << "Cálculo de média de alunos" << endl;
  cout << "Insira o nome do aluno:" << endl;
  cin >> nome;
  cout << "Insira as três notas do aluno em sequência:" << endl;
  cin >> nota1 >> nota2 >> nota3;
  media = ((nota1 + nota2 + nota3)/3);
  cout << "Aluno " << nome << " possui média " << media << endl;
  return 0;
} 
