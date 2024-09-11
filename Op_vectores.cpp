#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

/* ---------------------------------------------- EJERCICIO 1 ------------------------------------------ */

int ej1() {
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}
	return 0;
}

/* ---------------------------------------------- EJERCICIO 2 ------------------------------------------ */

int ej2() {
	vector<int> v;

	for(int i=1; i<=5 ; ++i) {
		v.push_back(i);
	}

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 3 ------------------------------------------ */

int ej3() {
	int c;
	int ad = 0;

	cout<<"Digite N: ";
	cin>>c;

	vector<int> v(c);

	cout<<"Digite los "<<c<<" enteros: ";

	for(int i=0; i<v.size(); ++i) {
		cin>>v[i];
	}

	for(int i=0; i<v.size(); ++i) {
		ad += v[i];
	}

	cout<<ad;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 4 ------------------------------------------ */

int ej4() {
	vector<int> v(5);

	for(int i=0; i<5; ++i) {
		v[i] = i * 2;
	}

	for(int i=0; i<5; ++i) {
		cout<<v[i]<<" ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 5 ------------------------------------------ */

//revisar este ejercicio

int ej5() {
	vector<int> v(5);

	for(int i=0; i<5; ++i) {
		v.at(i) = i * 2;
	}

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 6 ------------------------------------------ */

int ej6() {
	int n;

	cout<<"Digite N: ";
	cin>>n;
	cout<<"Digite "<<n<<" enteros: ";

	vector<int> v(n);

	for(int i=0; i<v.size(); ++i) {
		cin>>v[i];
	}

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	return 0;
}


/* ---------------------------------------------- EJERCICIO 7 ------------------------------------------ */

int ej7() {
	vector<int> v;

	for(int i=0; i<10; ++i) {
		v.push_back(i+1);
		cout<<v.size()<<" "<<v.capacity()<<endl;
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 8 ------------------------------------------ */

int ej8() {
	int N;
	int M;

	cout<<"Ingrese el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}

	for(int i=0; i<v.size(); ++i) {
		if(v[i] >= M) {
			M=v[i];
		}
	}

	cout<<M;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 9 ------------------------------------------ */

int ej9() {
	int N;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}


	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	v.pop_back();
	cout<<endl;

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 10 ------------------------------------------ */

int ej10() {
	int N;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}

	vector<int> nV;

	while(!v.empty()) {
		nV.push_back(v.back());
		v.pop_back();
	}

	for(int i=0; i<nV.size(); ++i) {
		cout<<nV[i]<<" ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 11 ------------------------------------------ */

int ej11() {
	int N;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}

	cout<<v.front()<<" "<<v.back();

	return 0;
}


/* ---------------------------------------------- EJERCICIO 12 ------------------------------------------ */

int ej12() {
	int N;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}

	vector<int> v2(v);

	cout<<"Original: ";
	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	cout<<endl<<"Copiado: ";

	for(int i=0; i<v2.size(); ++i) {
		cout<<v2[i]<<" ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 13 ------------------------------------------ */

int ej13() {
	int N;
	float prom;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
		prom += v[i];
	}

	prom = prom/v.size();

	cout<<"Promedio: "<<fixed<<setprecision(2)<<prom;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 14 ------------------------------------------ */

int ej14() {
	int N;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}
	v.clear();
	cout<<"\n"<<v.size();

	return 0;
}

/* ---------------------------------------------- EJERCICIO 15 ------------------------------------------ */

int ej15() {
	int N;
	int M;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}

	cout<<"Digite el nuevo tamaC1o: ";
	cin>>M;
	cout<<"Antes de cambiar el tamaC1o:\n"<<v.size()<<" "<<v.capacity()<<endl;
	v.resize(M);
	cout<<"DespuC)s de cambiar el tamaC1o:\n"<<v.size()<<" "<<v.capacity()<<endl;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 16 ------------------------------------------ */

int ej16() {
	int N;
	int M;

	cout<<"Digite el tamaC1o: ";
	cin>>N;
	vector<int> v(N);
	cout<<"Digite "<<N<<" enteros: ";

	for(int i=0; i<N; ++i) {
		cin>>v[i];
	}

	cout<<"Digite el valor a insertar: ";
	cin>>M;
	cout<<"\nEl vector antes de insertar "<<M<<" es: ";

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	v.insert(v.begin() + 2, M);

	cout<<"\nEl vector antes de insertar "<<M<<" es: ";

	for(int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}

	return 0;
}
/* ---------------------------------------------- PRINCIPAL ------------------------------------------ */

int main() {
	ej6();

	return 0;
}
