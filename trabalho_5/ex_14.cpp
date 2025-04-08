#include <iostream>

using namespace std;

int main(){
  // define a quantidade de pessoas entrevistadas
  const int habitantes = 3;
  
  int auxiliarFilhos;

  float mediaSal,
        maiorSal = 0.0,
        mediaFilhos,
        auxiliarSal;
  
  for (int i = 0; i < habitantes; i++) {
    cout << "Insira seu salário:" << endl;
    cin >> auxiliarSal;
    if(auxiliarSal > maiorSal)
      maiorSal = auxiliarSal;
    mediaSal += auxiliarSal;

    cout << "Insira quantos filhos voce tem:" << endl;
    cin >> auxiliarFilhos;
    mediaFilhos += auxiliarFilhos;
  }

  cout << "A média salarial é " << mediaSal / habitantes << ", o maior salário é de " << maiorSal << " e a media de filhos por habitante é " << mediaFilhos/ habitantes << endl;
  return 0;
}
