#include <iostream>

using namespace std;

int main(){
  setlocale(LC_ALL, "Portuguese");

  int n, m;
  cout << "Informe dois um período de valores" << endl;
  cin >> n >> m;
  
  if(n >= m)
    cout << "Impossível realizar período" << endl;

  for(int i = n; i <= m; i++) {
    cout << i << endl;  
  }

  return 0;
}
