#include <iostream>

using namespace std;

int fatorial(int);

int main(){
	int n;
	cout << "Insira um numero para calcular o fatorial: ";
	cin >> n;
	cout << fatorial(n);
	return 0;
}

int fatorial(int n){
	if(n <= 1){
		return n;
	}
	int temp = n * fatorial(n - 1);
	return temp;
}


