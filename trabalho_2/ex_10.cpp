# include <iostream>

using namespace std;

int main(){
  int number;
  float result, 
        percent = 0.12;
  cout << "Insira um valor inteiro:" << endl;
  cin >> number;
  result = number * percent; 
  cout << percent * 100 << "% de " << number << " e: " << result << endl;
}
