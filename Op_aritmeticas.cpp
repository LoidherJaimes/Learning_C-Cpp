#include<iostream>
using namespace std;

int main() {
	int n1, n2;
	char op;

	cin>>n1;
	cin>>n2;
	cin>>op;

	switch(op) {
	case '+':
		cout<<endl<<n1+n2<<endl;
		break;
	case '-':
		cout<<endl<<n1-n2<<endl;
		break;
	case '*':
		cout<<endl<<n1*n2<<endl;
		break;
	case '/':
		cout<<endl<<n1/n2<<endl;
		break;
	default:
		cout<<"Error!\n"<<endl;
		main();
	}

	return 0;
}