#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Digite dos numeros: ";
	cin>>n1;
	cin>>n2;
	
	if (n1 == n2){
		cout<<"ambos son iguales.";
	}
	else{
		if(n1 > n2){
		cout<<n1<<" es mayor";
		}
		else{
		cout<<n2<<" es mayor";
		}
	}
	
	return 0;
}
