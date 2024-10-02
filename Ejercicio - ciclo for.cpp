#include<iostream>

using namespace std;

int main(){
	//Declaramos un array
	int ar[5];
	
	cout<<"Introduzca 5 numeros enteros para el arreglo:"<<endl;
	for(int i=0; i<5 ; ++i){
		cout<<"Numero "<<i + 1<<": ";
		cin>>ar[i];
	}
	
	cout<<"\nLos numeros ingresados fueron: "<<endl;
	for(int c=0; c<=4; ++c){
		cout<<"Numero en la posicion "<<c<<": "<<ar[c]<<endl;
	}
	
	cout<<"\nLa suma de los valores del arreglo es: "<<ar[0]+ar[1]+ar[2]+ar[3]+ar[4]<<endl;
	cout<<"\nEl promedio de los valores del arreglo es: "<<(ar[0]+ar[1]+ar[2]+ar[3]+ar[4])/5<<endl;
	
return 0;
}

