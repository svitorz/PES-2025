#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  uint numProdutos = 0;
  cout << "Insira o número de produtos que deseja cadastrar:";
  cin >> numProdutos;

  struct EstruturaProduto {
    char nome[20], marca[30], descricao[50];
    float preco;
    int quantidade, id;
  } strProd[numProdutos];
  
  uint i; 
  
  for (i = 0; i < numProdutos; i++) {
    cout << "Insira o nome do produto:";
    cin >> strProd[i].nome;

    cout << "Insira a marca do produto:";
    cin >> strProd[i].marca;

    cout << "Insira a descrição do produto:";
    cin >> strProd[i].descricao;

    cout << "Insira o preço do produto:";
    cin >> strProd[i].preco;

    cout << "Insira a quantidade do produto:";
    cin >> strProd[i].quantidade;
    
    strProd[i].id = i;
    
    cout << endl;
    fflush(stdin);
  }

  for (i = 0; i < numProdutos; i++) {
    cout << "ID:" << strProd[i].id << endl; 
   cout << "Nome:" << strProd[i].nome<< endl;
   cout << "Marca:" << strProd[i].marca << endl; 
   cout << "Descrição:" << strProd[i].descricao << endl; 
   cout << "Preço:" << strProd[i].preco << endl;  
   cout << "quantidade:" << strProd[i].quantidade << endl; 
  }

  return 0;
}
