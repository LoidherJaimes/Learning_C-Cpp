#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n; //n es el numero de elementos del vector
    int suma1 = 0; //suma1 es la suma de los elementos de la primera mitad del vector
    int suma2 = 0; //suma2 es la suma de los elementos de la segunda mitad del vector
    int middle = 0;

    cin>>n; //se lee el numero de elementos del vector

    //se verifica si n es par o impar
    if(n%2 == 0){
        vector<int> A(n);
        middle = n/2;

        //se lee el vector
        for(int i=0; i<n; i++){
            cin>>A[i];
        }

        //se suman los elementos de la primera y segunda mitad del vector
        for(int i = 0; i<n; i++){
            //se verifica si i esta en la primera mitad del vector
            if(i>=0 && i<middle){
                suma1 += A[i];
            //se verifica si i esta en la segunda mitad del vector
            } else if (i>=middle && i<n){
                suma2 += A[i];
            }
        }
        //se verifica si la suma de los elementos de la primera mitad del vector es igual a la suma de los elementos de la segunda mitad del vector
        if(suma1 == suma2){
            //si la suma de los elementos de la primera mitad del vector es igual a la suma de los elementos de la segunda mitad del vector se imprime 1
            cout<<suma1<<" 1"<<endl;
            //si la suma de los elementos de la primera mitad del vector no es igual a la suma de los elementos de la segunda mitad del vector se imprime 0
        } else {
            cout<<suma1<<" 0"<<endl;
        }
    //si n es impar se imprime ERROR
    } else {
        cout<<"ERROR"<<endl;
    }

    return 0;
}