#include<iostream>

using namespace std;

int main() {
	int ed;

	cin>>ed;

	if(ed>=1 && ed<=100) {
		if(ed>=1 && ed<10) {
			cout<<"Nino"<<endl;
		}
		else if(ed>=10 && ed<19) {
			cout<<"Adolescente"<<endl;
		}
		else if(ed>=19 && ed<=100) {
			cout<<"Adulto"<<endl;
		}
	}
	else {
		cout<<"Edad fuera de rango";
	}

	return 0;
}