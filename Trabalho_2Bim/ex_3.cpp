#include <iostream>
//biblioteca nativa que permite trabalhar de forma mais abrangente com vetores
#include <vector>
#define size 4


int vector1[size];
int vector2[size];

using namespace std;

void setVector(int value, int index);

vector<int> multiplyVectors();

int main(){
  int aux;

  for (int i = 0; i < size * 2; i++) {
    if(i < size){
      cout << "Insira o "<< i+1 << " º valor do VETOR 1:";
      cin >> aux;
    } else {
      cout << "Insira o "<< i+1 << " º valor do VETOR 2:";
      cin >> aux;
    }

    setVector(aux, i);
  }

  cout << "Os valores digitados no vetor 1 são: ";
  for(int number : vector1){
    cout << number << " - ";
  }
  cout << endl;

  cout << "Os valores digitados no vetor 2 são: ";
  for(int number : vector2){
    cout << number << " - ";
  }
  cout << endl;


  vector<int> result = multiplyVectors();

  cout << "Os valores dos vetores multiplicados são:";
  for(int i = 0; i < size; i++){
    cout << result[i] << " - ";
  }
  cout << endl;

  return 0;
}

void setVector(int value, int index){
  if(index < size){
    index -= size;
    vector2[index] = value;
    return;
  }
  vector1[index] = value;
}

vector<int> multiplyVectors(){
  vector<int> result(size);
  for (int i = 0; i < size; i++) {
    result[i] += vector1[i] * vector2[i]; 
  }
  return result;
}
