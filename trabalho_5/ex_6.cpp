#include <iostream>

using namespace std;

int main(){
  int n;
  cout << "Insira um numero inteiro:" << endl;
  cin >> n;
  
  if(n == 0){
    cout << "zero" << endl;
    return 0;
  }else if (n > 0) {
    cout << "positivo" << endl;
    return 0;
  }
  cout << "negativo"<< endl;

  return 0;
}
