#include <iostream>

using namespace std;

float Celsius(float);

int main(){
	float celsius, fahrenheit;
	cout << "Insira uma temperatura em Fahrenheit:" << endl;
	
	cin >> fahrenheit;
	
	celsius = Celsius(fahrenheit);
	
	cout << "A temperatura " <<  fahrenheit << "F em Celsius " << celsius << endl;
	return 0;
}

float Celsius(float temp){
	return (temp - 32) * 5/9;
}
