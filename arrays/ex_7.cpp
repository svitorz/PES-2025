#include <iostream>
#include <locale>

using namespace std;

int main()
{

  int n = 15, numbers[n];

  for (int i = 0; i < n; i++) {
    cout << "Insira um valor inteiro:" << endl;
    cin >> numbers[i];
  }

  for (int j = 0; j < n; j++) {
    if (numbers[j] <= 0) {
      cout << "O valor *" << numbers[j] << "* no índice " << j << " é nulo/inválido." << endl; 
    }else if(numbers[j] % 2 == 0){
      cout << "O valor *" << numbers[j] << "* no índice " << j << " é par." << endl; 
    } else {
      cout << "O valor *" << numbers[j] << "* no índice " << j << " é impar." << endl; 
    } 
  }

  return 0;
}
