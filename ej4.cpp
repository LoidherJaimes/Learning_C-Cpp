#include<iostream>

using namespace std;

int main() {
    int a1, a2, b1, b2;
    
    cin>>a1;
    cin>>a2;
    cin>>b1;
    cin>>b2;
    
    if((a1<=b2) && (b1<=a2)) {
        cout<<"1"<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
    
	return 0;
}
