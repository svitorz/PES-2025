#include <iostream>
#include <stdexcept>
#include <cmath>
#include <fstream>

using namespace std;

int numPessoas;
float calcImc(float peso, float altura);

int main(){
  fstream arquivoCliente;

  arquivoCliente.open("customer_file.txt",ios::out|ios::app);

  if(arquivoCliente.is_open()){

    arquivoCliente << "Programa para calcular o IMC de uma pessoa." << endl; 

    cout << "Quantos IMC's você vai calcular?: ";
    cin >> numPessoas;

    struct Clientes {
      char nome[20];
      float peso, altura; 
    } strCliente[numPessoas]; 

    for (int i = 0; i < numPessoas; i++) {
      cout << "Informe o nome do cliente: ";
      cin >> strCliente[i].nome;

      cout << endl;

      cout << "Digite o peso:";
      cin >> strCliente[i].peso; 

      cout << endl;

      cout << "Digite a altura:";
      cin >> strCliente[i].altura; 

      cout << endl;

      cout << "O IMC é: " << calcImc(strCliente[i].peso, strCliente[i].altura);
      arquivoCliente << "O IMC do cliente " << strCliente[i].nome << " é: " << calcImc(strCliente[i].peso, strCliente[i].altura) << endl; 
      cout << endl; 
    }
  }else {
    cout << "erro ao abrir arquivo.";
    return 1;
  }
  return 0;
}

float calcImc(float peso, float altura){
  if(peso == 0 || altura == 0){
    throw runtime_error("Divisão por zero.");
  }

  return peso / pow(altura,2);
}
