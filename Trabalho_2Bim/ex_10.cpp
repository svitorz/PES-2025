#include <iostream>
#include <fstream>

using namespace std;

int main(){

  fstream arquivoPet;

  arquivoPet.open("pet_file.txt",ios::out|ios::app);

  if(arquivoPet.is_open()){
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
      arquivoPet << "Insira o nome do animal: ";
      arquivoPet << strPet[i].nome;

      cout << endl;
      arquivoPet << endl;

      cout << "Insira a espécie do animal: ";
      cin >> strPet[i].especie;
      arquivoPet << "Insira a espécie do animal: ";
      arquivoPet << strPet[i].especie;
      
      cout << endl;
      arquivoPet << endl;

      cout << "Insira a raça do animal: ";
      cin >> strPet[i].raca;
      arquivoPet << "Insira a raça do animal: ";
      arquivoPet << strPet[i].raca;

      cout << endl;
      arquivoPet << endl;
      
      cout << "Insira o sexo do animal: ";
      cin >> strPet[i].sexo;
      arquivoPet << "Insira o sexo do animal: ";
      arquivoPet << endl;
      
      
      cout << endl;
      arquivoPet << endl;
      
      cout << "Insira a idade do animal: ";
      cin >> strPet[i].idade;
      arquivoPet << "Insira a idade do animal: ";
      arquivoPet << strPet[i].idade;
      
      
      cout << endl;
      arquivoPet << endl;
      
      cout << "Insira o nome do dono do animal: ";
      cin >> strPet[i].nomeDono;
      arquivoPet << "Insira o nome do dono do animal: ";
      arquivoPet << strPet[i].nomeDono;
      
      
      cout << endl;
      arquivoPet << endl;
      
      cout << "Insira o rg do dono do animal: ";
      cin >> strPet[i].rg;
      arquivoPet << "Insira o rg do dono do animal: ";
      arquivoPet << strPet[i].rg;
      
      cout << endl;
      arquivoPet << endl;
      
      cout << "Insira o telefone do dono do animal: ";
      cin >> strPet[i].telefone;
      arquivoPet << "Insira o telefone do dono do animal: ";
      arquivoPet << strPet[i].telefone;
     
      cout << endl;
      arquivoPet << endl;
      
    }

    arquivoPet.close();
  }else {
    cout << "Erro ao abrir arquivo." << endl;
    return 1;
  }

  return 0;
}
