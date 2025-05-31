#include <iostream>

using namespace std;



int main(){
  int numPets = 0;

  cout << "Quantos animais você vai cadastrar? ";
  cin >> numPets;

  struct Pet {
    char nome[20], especie[30], raca[20], sexo, nomeDono[30], rg[9], telefone[10];
    int idade;
  } strPet[numPets];

  for (int i = 0; i < numPets; i++) {
    cout << "Insira o nome do animal: ";
    cin >> strPet[i].nome;

    cout << endl;

    cout << "Insira a espécie do animal: ";
    cin >> strPet[i].especie;

    cout << endl;

    cout << "Insira a raça do animal: ";
    cin >> strPet[i].raca;

    cout << endl;

    cout << "Insira o sexo do animal: ";
    cin >> strPet[i].sexo;

    cout << endl;

    cout << "Insira a idade do animal: ";
    cin >> strPet[i].idade;

    cout << endl;

    cout << "Insira o nome do dono do animal: ";
    cin >> strPet[i].nomeDono;

    cout << endl;

    cout << "Insira o rg do dono do animal: ";
    cin >> strPet[i].rg;

    cout << endl;

    cout << "Insira o telefone do dono do animal: ";
    cin >> strPet[i].telefone;

    cout << endl;
  }
  
  cout << "Cliente cadastrado com sucesso!" << endl; 
  
for (int i = 0; i < numPets; i++) {
    cout << endl;

    cout << "nome do animal: ";
    cout << strPet[i].nome;

    cout << endl;

    cout << "espécie do animal: ";
    cout << strPet[i].especie;

    cout << endl;

    cout << "raça do animal: ";
    cout << strPet[i].raca;

    cout << endl;

    cout << "sexo do animal: ";
    cout << strPet[i].sexo;

    cout << endl;

    cout << "idade do animal: ";
    cout << strPet[i].idade;

    cout << endl;

    cout << "nome do dono do animal: ";
    cout << strPet[i].nomeDono;

    cout << endl;

    cout << "rg do dono do animal: ";
    cout << strPet[i].rg;

    cout << endl;

    cout << "telefone do dono do animal: ";
    cout << strPet[i].telefone;

    cout << endl;
  }


  return 0;
}
