#include <iostream>
#include <cstring>
#define NALUNO 3
using namespace std;

int main()
{
  struct EstruturaAluno {
      char nome[50];
      char matricula[10];
      int anoIngresso;
  } strAluno[NALUNO];

  int i;
  for (i = 0; i < NALUNO; i++) {
    cout << "Informe o nome do aluno:";
    cin >> strAluno[i].nome;
  
    cout << endl << "Informe a matrícula do aluno:";
    cin >> strAluno[i].matricula;

    cout << endl << "Informe o ano de ingresso do aluno:";
    cin >> strAluno[i].anoIngresso;
    fflush(stdin);
  }

  for (i = 0; i < NALUNO; i++) {
    cout << "Aluno:" << strAluno[i].nome << endl; 
    cout << "Matricula:" << strAluno[i].matricula << endl; 
    cout << "Ingressou no ano:" << strAluno[i].anoIngresso << endl; 
  }
  return 0;
}
