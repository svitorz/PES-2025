#include <iostream>
#define max 10


// definida globalmente para que possa ser acessada corretamente na memória
int nums[max];

using namespace std;


// faz a soma e printa na tela 
void getSum(int value, int index){
  int sum = 0;
  nums[index-1] = value;
  
  // debug
  // cout << "valor: " << value << endl << "index: "<< index-1 << endl;

  if(index == max){
    cout << "Os números digitados são ";
    
    for (int num : nums) {
      sum += num; 
      cout << num << " - ";
    }

    cout << endl;

    cout << "A soma dos valores digitados é " << sum << endl;
  }
}

int main(){
  // variável auxiliar para passar o valor para a função
  int aux;
  for (int i = 1; i <= max; i++) {
    cout << "Insira o "<< i << " º número inteiro:";
    cin >> aux;

    getSum(aux, i);
  }
  return 0;
}
