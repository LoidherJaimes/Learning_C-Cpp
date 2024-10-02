#include<iostream>

using namespace std;

int main(){
	float n1, n2, n3;
	float prom = 0;
	int op;
	
	cout<<"Digite la primera nota: ";
	cin>>n1;
	cout<<"Digite la segunda nota: ";
	cin>>n2;
	cout<<"Digite la tercera nota: ";
	cin>>n3;
	
	if((n1 >= 0 && n1 <= 10) && (n2 >= 0 && n2 <= 10) && (n3 >= 0 && n3 <= 10)){
	prom = (n1+n2+n3)/3;
		if(prom >= 7.0){
			cout<<"\nSu promedio es: "<<prom<<"\n"<<"Usted aprobo.";
		}
		else{
			cout<<"\nSu promedio es: "<<prom<<"\n"<<"Usted reprobo.";
		}	
	}
	else{
		cout<<"\nUno de los valores ingresados no es admitido por el programa.\n\n";
		cout<<"Desea intentarlo de nuevo?"<<endl;
		cout<<"1) Si.\n2) No.\n";
		cin>>op;
		if(op == 1){
			cout<<"\nDe acuerdo!\n\n";
			system("cls");
			main();
			}
			else{
				cout<<"\nHasta luego.\n\n";
			}
	}
	
	return 0;
}
