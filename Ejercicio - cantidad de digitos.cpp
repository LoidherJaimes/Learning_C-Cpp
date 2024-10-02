#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	if(numero<=9999 && numero>=-9999){
		if(numero<=999 && numero>=-999){
			if(numero<=99&& numero>=-99){
				if(numero<=9 && numero>=-9){
				cout<<"El numero es de 1 digito.";	
				}
				else{
					cout<<"el numero es de 2 digitos.";
				}
			}
			else{
				cout<<"El numero es de 3 digitos.";
			}
		}
		else{
			cout<<"El numero es de 4 digitos.";
		}
	}
	else{
		cout<<"El numero supera los 4 digitos.";
	}
	
	return 0;
}
