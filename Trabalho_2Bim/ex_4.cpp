#include <iostream>
#define ALUNOS 5
#define PROVAS 2

float notas[ALUNOS][PROVAS];

float calcularMedias(float soma);

void buscarValores();
void mostrarNotas();

using namespace std;

int main(){
  buscarValores();
  mostrarNotas();
  return 0;
}

float calcularMedias(float soma){
  return soma / PROVAS;
}

void buscarValores(){
  int i, aluno, index, aux;
  for (i = 0; i < ALUNOS * 2; i++) {
    aluno = i / 2;
    index = i % 2;

    cout << "Digite a nota da P" << index + 1 << " do aluno " << aluno + 1 << ":";
    cin >> aux;
    if(aux >= 0 && aux <= 10){
      notas[aluno][index] = aux;
    }else {
      cout << "Nota inválida." << endl;
    }
  }
}

void mostrarNotas(){
  float soma = 0;
  cout << "\nNotas dos alunos:\n";
    for (int i = 0; i < ALUNOS; i++) {
        cout << "Aluno: " << (i + 1) << " ";
        for (int j = 0; j < PROVAS; j++) {
            cout << " P" << j+1 << " = " << notas[i][j] << " ";
            soma += notas[i][j]; 
        }
        cout << endl;
        cout << "Média:"<< calcularMedias(soma) << endl;
        if (calcularMedias(soma) >= 6){
          cout << "Aprovado" << endl;
        } else {
            cout << "Reprovado" << endl;
        }
        soma = 0;
    }
}
