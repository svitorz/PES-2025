#include<iostream>

using namespace std;

int main()
{
  float value_per_hour, hours, salary;

  cout << "Por favor, insira o quanto voce ganha por hora: " << endl;
  cin >> value_per_hour;

  cout << "Agora, insira a quantidade de horas trabalhadas por dia: " << endl;
  cin >> hours;

  salary = (value_per_hour * hours) * 30;
  cout << "Seu salario total e: " << salary << endl;
  return 0;
}
