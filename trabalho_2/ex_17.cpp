#include<iostream>
using namespace std;

int main(){
  int num1, num2, num3;
  cout << "Insira 3 numeros:" << endl;
  cin >> num1 >> num2 >> num3;
  
  if((num1 >= num2) && (num2>= num3)){
    cout << num1 << " e o maior numero que inseriu"<<endl;
  } else if((num3 >= num1) && (num3>=num2)){
    cout << num3 << " e o maior numero que inseriu"<<endl;
  } else {
    cout << num2 << " e o maior numero que inseriu"<<endl;
  }
  return 0;
}
