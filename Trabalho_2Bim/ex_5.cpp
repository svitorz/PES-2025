#include <iostream>

int vector[10] = {10,9,8,7,6,5,4,3,2,1};

using namespace std;

int main(){
  cout << "Os valores do vetor são:" << endl;
  for (int i = 0; i < 10; i++) {
    cout << vector[i] << " - ";
  }
  
  cout << endl;

  cout << "Os valores do vetor na ordem inversa são:" << endl;
  for (int i = 9; i >= 0; i--) {
    cout << vector[i] << " - ";
  }

  cout << endl;
  
  return 0;
}
