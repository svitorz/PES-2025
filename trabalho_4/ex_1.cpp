#include <iostream>
#include <clocale>
 
using namespace std;

int main(){
  setlocale(LC_ALL, "Portuguese");

  int elements = 0, n = 1;

  do {
    cout << "Insira um número: " << endl;
    cin >> n;
    elements++;
  } while(n != 0);
  cout << "Foram digitados " << elements - 1 << " números" << endl;
  return 0;
}
