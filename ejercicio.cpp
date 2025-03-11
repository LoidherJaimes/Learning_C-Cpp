#include<iostream>

using namespace std;
const int MAXSIZE=4;
const int MINSIZE=3;
int main() {
	int M;
	int N;

	cout<<"Digite M y N: ";
	cin>>M>>N;

	//validamos que los valores estC)n en el rango
	if((M>=MINSIZE && M<=MAXSIZE)&&(N>=MINSIZE && N<=MAXSIZE)) {
		int A[M][N];
		int B[M][N];

		//llenamos la matriz
		for(int i=0; i<M; ++i) {
			for(int j=0; j<N; ++j) {
				cin>>A[i][j];
			}
		}
		
		cout<<"\n"<<endl;

		//mostramos la matriz
		for(int i=0; i<M; ++i) {
			cout<<"[ ";
			for(int j=0; j<N; ++j) {
				cout<<A[i][j]<<" ";
			}
			cout<<"]"<<endl;
		}

		B[0][0] = A[0][0] + A[0][1] + A[1][0] + A[1][1];
		B[0][1] = A[0][0] + A[0][1] + A[0][2] + A[1][0] + A[1][1] + A[1][2];
		B[0][2] = A[0][1] + A[0][2] + A[0][3] + A[1][1] + A[1][2] + A[1][3];
		B[0][3] = A[0][2] + A[0][3] + A[1][2] + A[1][3]; //primera fila
		B[1][0] = A[0][0] + A[0][1] + A[1][0] + A[1][1] + A[2][0] + A[2][1];
		B[1][1] = A[0][0] + A[0][1] + A[0][2] + A[1][0] + A[1][1] + A[1][2] + A[2][0] + A[2][1] + A[2][2];
		B[1][2] = A[0][3] + A[0][1] + A[0][2] + A[1][3] + A[1][1] + A[1][2] + A[2][3] + A[2][1] + A[2][2];
		B[1][3] = A[0][2] + A[0][3] + A[1][2] + A[1][3] + A[2][2] + A[2][3];//segunda fila
		B[2][0] = A[1][0] + A[1][1] + A[2][0] + A[2][1];
		B[2][1] = A[1][0] + A[1][1] + A[1][2] + A[2][0] + A[2][1] + A[2][2];
		B[2][2] = A[1][1] + A[1][2] + A[1][3] + A[2][1] + A[2][2] + A[2][3];
		B[2][3] = A[1][2] + A[1][3] + A[2][2] + A[2][3];//tercera fila
		
		cout<<"\n"<<endl;
		
		for(int i=0; i<M; ++i) {
			cout<<"[ ";
			for(int j=0; j<N; ++j) {
				cout<<B[i][j]<<" ";
			}
			cout<<"]"<<endl;
		}
	}

	return 0;
}
