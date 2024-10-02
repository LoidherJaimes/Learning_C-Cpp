#include<iostream>

using namespace std;

int main(){
	float num1, num2, add, dif, mul, div;
	
	cout<<"Digite el primer numero: ";
	cin>>num1;
	cout<<"Digite el segundo numero: ";
	cin>>num2;
	
	if(num1>num2){
		add = num1 + num2;
		dif = num1 - num2;
		cout<<"\nLa suma de los valores es: "<<add<<endl;
		cout<<"La diferencia de los valores es: "<<dif<<endl;
	}
	else{
		mul = num2 * num1;
		div = num2 / num1;
		cout<<"La multiplicacion de los valores es: "<<mul<<endl;
		cout<<"La division de los valores es: "<<1div<<endl;
	}
	
	return 0;
}
