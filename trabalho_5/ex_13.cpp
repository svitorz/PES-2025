#include <iostream>

using namespace std;

int main(){
  const int max = 5;
  int n, soma = 0;
  
  for (int i = 0; i < max; i++) { 
    cout << "Insira um numero inteiro:" << endl;
    cin >> n;
    if(n % 2 == 0){
      soma += n;
    }
  }

  cout << "A media dos numeros inseridos é: " <<  soma / max << endl;
  return 0;
}
