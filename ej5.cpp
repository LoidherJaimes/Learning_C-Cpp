#include<iostream>

using namespace std;

int main() {
	int a, b, c;
	int dif1, dif2;

//pido los valores de la posicion de cada uno
	cin>>a;
	cin>>b;
	cin>>c;

//verifico que los valores se encuentren entre 0 y 100
	if(((a>=0)&&(a<=100))&&((b>=0)&&(b<=100))&&((c>=0)&&(c<=100))) {
		//calculo la distancia entre cada gato y el raton
		dif1=c-a;
		dif2=c-b;
		
		//verifico que si alguna de las distancias quede negativa, se multiplique por -1 para que sea positiva
		if(dif1<0) {
			dif1 *= -1;
		}
		
		if(dif2<0) {
			dif2 *= -1;
		}
		
		//finalmente, si las diferencias de distancia son iguales, el raton escapa, pero si alguna es mayor o menor a la otra, el gato mas cercano caza al raton
		if(dif1==dif2) {
			cout<<"raton C"<<endl;
		}
		else if(dif1<dif2) {
			cout<<"gato A"<<endl;
		}
		else {
			cout<<"gato B"<<endl;
		}
	}
	//si el valor de posicion de alguno esta fuera del intervalo [0, 100], esta fuera de rango
	else{
	    cout<<"Fuera de rango."<<endl;
	}

	return 0;
}
