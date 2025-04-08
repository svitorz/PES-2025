#include <iostream>

using namespace std;

int main(){
  int n, negative = 0;
  for (int i = 1; i <= 15; i++) {
    cout << "Insira um numero inteiro: " << endl;
    cin >> n;
    if(n < 0){
      negative++;
    }
  }

  cout << "Foram inseridos " << negative << " numeros negativos." << endl;

  return 0;
} 
