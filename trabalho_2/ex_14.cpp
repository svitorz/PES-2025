#include<iostream>

using namespace std;

int main(){
  float amount, diff, weight = 50.0, fine = 4.0;
  cout << "Insira o peso total dos peixes que pegou: " << endl;
  cin >> amount;
  diff = amount - weight;
  if(diff > 0){
    cout << "Voce pagara " << diff * fine << " de multa." << endl;
  }else {
    cout << "Sem multa." << endl;
  }
  return 0;
}
