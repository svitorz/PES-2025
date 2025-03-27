#include<iostream>
using namespace std;

int main(){
  float nota1, nota2, media;
  cout << "Por favor, insira suas notas parciais: " << endl;
  cin >> nota1 >> nota2;
  
  media = (nota1 + nota2) / 2;
  if(media == 10){
    cout << "Aprovado com Dinstincao" <<endl;
  }else if(media >= 7){
    cout << "Aprovado" <<endl;
  }else{
      cout << "Reprovado" <<endl;
  }
  return 0;
}
