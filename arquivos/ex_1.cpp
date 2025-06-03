#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream arq1;
 
  arq1.open("nomes.txt", ios::app);
  if(arq1.is_open()){
    arq1 << "Ivan Lopes" << endl;
    arq1 << "Vitor Fábio" << endl;
    arq1 << "Pedro" << endl;
    arq1 << "Keven" << endl;
    arq1.close();
  }else {
    cout << "erro ao abrir arquivo." << endl;
  }
  return 0;
}
