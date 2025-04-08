#include <iostream>

using namespace std;

int main(){
  float n1,n2,n3, ma;
  char conceito;
  std::cout << "Insira suas 3 notas na disciplina: " << endl;
  cin >> n1 >> n2 >> n3;
  ma = (n1+n2+(n3*3))/6;

  if(ma >= 9.0){
    conceito = 'A';
  } else if (ma >= 7.5) {
    conceito = 'B';
  } else if (ma >= 6.0) {
    conceito = 'C';
  }else if (ma >= 4.0) {
    conceito = 'D';
  } else {
    conceito = 'E';
  }

  if(conceito == 'A' ||conceito == 'B' ||conceito == 'C'){
    cout << "Aprovado" << endl;
  } else {
    cout << "Reprovado" << endl;
  }
  return 0;
}
