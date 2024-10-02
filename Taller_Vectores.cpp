#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

/* ---------------------------------------------- EJERCICIO 1 ------------------------------------------ */

int ej1() {
	// Inicialización de un vector con valores predefinidos
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};

	// Recorrido y visualización de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " "; // Acceso a cada elemento del vector
	}
	return 0;
}

/* ---------------------------------------------- EJERCICIO 2 ------------------------------------------ */

int ej2() {
	// Declaración de un vector vacío
	vector<int> v;

	// Uso de push_back para agregar elementos al vector
	for(int i = 1; i <= 5; ++i) {
		v.push_back(i); // Inserción de elementos en el vector
	}

	// Recorrido y visualización de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " "; // Acceso a cada elemento del vector
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 3 ------------------------------------------ */

int ej3() {
	int c;
	int ad = 0;

	cout << "Digite N: ";
	cin >> c;

	// Inicialización de un vector con tamaño dinámico según el valor de c
	vector<int> v(c);

	cout << "Digite los " << c << " enteros: ";

	// Captura de elementos para el vector desde la entrada del usuario
	for(int i = 0; i < v.size(); ++i) {
		cin >> v[i]; // Almacenamiento de los valores en el vector
	}

	// Suma de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		ad += v[i]; // Acumulación de los valores del vector
	}

	cout << ad;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 4 ------------------------------------------ */

int ej4() {
	// Declaración de un vector de tamaño 5
	vector<int> v(5);

	// Asignación de valores al vector
	for(int i = 0; i < 5; ++i) {
		v[i] = i * 2; // Multiplicación del índice por 2 y almacenamiento en el vector
	}

	// Recorrido y visualización de los elementos del vector
	for(int i = 0; i < 5; ++i) {
		cout << v[i] << " "; // Acceso a cada elemento del vector
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 5 ------------------------------------------ */

int ej5() {
	// Declaración de un vector de tamaño 5
	vector<int> v(5);

	// Asignación de valores usando el método at()
	for(int i = 0; i < 5; ++i) {
		v.at(i) = i * 2; // Uso de v.at() para asignar valores al vector
	}

	// Recorrido y visualización de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " "; // Acceso a cada elemento del vector
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 6 ------------------------------------------ */

int ej6() {
	int n;

	cout << "Digite N: ";
	cin >> n;
	cout << "Digite " << n << " enteros: ";

	// Inicialización de un vector de tamaño n
	vector<int> v(n);

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < v.size(); ++i) {
		cin >> v[i];
	}

	// Recorrido y visualización de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	return 0;
}


/* ---------------------------------------------- EJERCICIO 7 ------------------------------------------ */

int ej7() {
	// Declaración de un vector vacío
	vector<int> v;

	// Agregar elementos y mostrar tamaño y capacidad del vector
	for(int i = 0; i < 10; ++i) {
		v.push_back(i + 1); // Inserción de elementos en el vector
		cout << v.size() << " " << v.capacity() << endl; // Visualización de tamaño y capacidad
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 8 ------------------------------------------ */

int ej8() {
	int N;
	int M = 0;

	cout << "Ingrese el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	// Determinar el valor máximo en el vector
	for(int i = 0; i < v.size(); ++i) {
		if(v[i] >= M) {
			M = v[i]; // Actualización del máximo valor
		}
	}

	cout << M;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 9 ------------------------------------------ */

int ej9() {
	int N;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	// Visualización de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	v.pop_back(); // Eliminación del último elemento del vector
	cout << endl;

	// Visualización del vector después de eliminar el último elemento
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 10 ------------------------------------------ */

int ej10() {
	int N;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	vector<int> nV; // Declaración de un nuevo vector vacío

	// Transferencia de elementos del vector original al nuevo vector en orden inverso
	while(!v.empty()) {
		nV.push_back(v.back()); // Agregar el último elemento de v a nV
		v.pop_back(); // Eliminar el último elemento de v
	}

	// Visualización de los elementos del nuevo vector
	for(int i = 0; i < nV.size(); ++i) {
		cout << nV[i] << " ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 11 ------------------------------------------ */

int ej11() {
	int N;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	// Visualización del primer y último elemento del vector
	cout << v.front() << " " << v.back();

	return 0;
}


/* ---------------------------------------------- EJERCICIO 12 ------------------------------------------ */

int ej12() {
	int N;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	// Copia del vector v en un nuevo vector v2
	vector<int> v2(v);

	// Visualización del vector original
	cout << "Original: ";
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	// Visualización del vector copiado
	cout << endl << "Copiado: ";
	for(int i = 0; i < v2.size(); ++i) {
		cout << v2[i] << " ";
	}

	return 0;
}

/* ---------------------------------------------- EJERCICIO 13 ------------------------------------------ */

int ej13() {
	int N;
	float prom = 0; // Inicialización de la variable para el promedio

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y acumulación en prom
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
		prom += v[i];
	}

	// Cálculo del promedio
	prom = prom / v.size();

	// Visualización del promedio con 2 decimales
	cout << "Promedio: " << fixed << setprecision(2) << prom;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 14 ------------------------------------------ */

int ej14() {
	int N;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}
	v.clear(); // Vaciar el vector
	cout << "\n" << v.size(); // Mostrar el tamaño del vector (0 después de clear)

	return 0;
}

/* ---------------------------------------------- EJERCICIO 15 ------------------------------------------ */

int ej15() {
	int N;
	int M;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	cout << "Digite el nuevo tamaño: ";
	cin >> M;
	cout << "Antes de cambiar el tamaño:\n" << v.size() << " " << v.capacity() << endl;
	v.resize(M); // Redimensionar el vector
	cout << "Después de cambiar el tamaño:\n" << v.size() << " " << v.capacity() << endl;

	return 0;
}

/* ---------------------------------------------- EJERCICIO 16 ------------------------------------------ */

int ej16() {
	int N;
	int M;

	cout << "Digite el tamaño: ";
	cin >> N;
	vector<int> v(N); // Declaración de un vector de tamaño N
	cout << "Digite " << N << " enteros: ";

	// Captura de los valores del usuario y almacenamiento en el vector
	for(int i = 0; i < N; ++i) {
		cin >> v[i];
	}

	cout << "Digite el valor a insertar: ";
	cin >> M;
	cout << "\nEl vector antes de insertar " << M << " es: ";

	// Visualización de los elementos del vector
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	v.insert(v.begin() + 2, M); // Inserción de un elemento en la tercera posición

	cout << "\nEl vector después de insertar " << M << " es: ";

	// Visualización del vector después de la inserción
	for(int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	return 0;
}

/* ---------------------------------------------- Pausa ------------------------------------------ */

void pause() {
	cout << "\n\nPresione Enter para continuar.\n" << endl;
	cin.ignore();
	cin.get(); // Pausa para esperar que el usuario presione Enter
}

/* ---------------------------------------------- PRINCIPAL ------------------------------------------ */

int main() {
	int op;

	// Inicio del ciclo do-while para el menú
	do {
		cout << "\n-------------Menu - Taller en clase 1 - Vectores-------------------\n" << endl;
		cout << "1) Ejercicio 1." << endl;
		cout << "2) Ejercicio 2." << endl;
		cout << "3) Ejercicio 3." << endl;
		cout << "4) Ejercicio 4." << endl;
		cout << "5) Ejercicio 5." << endl;
		cout << "6) Ejercicio 6." << endl;
		cout << "7) Ejercicio 7." << endl;
		cout << "8) Ejercicio 8." << endl;
		cout << "9) Ejercicio 9." << endl;
		cout << "10) Ejercicio 10." << endl;
		cout << "11) Ejercicio 11." << endl;
		cout << "12) Ejercicio 12." << endl;
		cout << "13) Ejercicio 13." << endl;
		cout << "14) Ejercicio 14." << endl;
		cout << "15) Ejercicio 15." << endl;
		cout << "16) Ejercicio 16." << endl;
		cout << "\n0) Cerrar programa." << endl;
		cout << "\nSeleccione una opcion: ";
		cin >> op;
		cout << endl;

		// Validación del rango de opciones
		if(op >= 0 && op <= 16) {
			switch(op) {
				case 0:
					cout << "Gracias por usar el programa!" << endl;
					break;
				case 1:
					ej1();
					pause();
					break;
				case 2:
					ej2();
					pause();
					break;
				case 3:
					ej3();
					pause();
					break;
				case 4:
					ej4();
					pause();
					break;
				case 5:
					ej5();
					pause();
					break;
				case 6:
					ej6();
					pause();
					break;
				case 7:
					ej7();
					pause();
					break;
				case 8:
					ej8();
					pause();
					break;
				case 9:
					ej9();
					pause();
					break;
				case 10:
					ej10();
					pause();
					break;
				case 11:
					ej11();
					pause();
					break;
				case 12:
					ej12();
					pause();
					break;
				case 13:
					ej13();
					pause();
					break;
				case 14:
					ej14();
					pause();
					break;
				case 15:
					ej15();
					pause();
					break;
				case 16:
					ej16();
					pause();
					break;
				// Este caso no debería alcanzarse debido a la validación previa
				default:
					cout << "ERROR! Seleccione una opcion valida." << endl;
					pause();
			}
		}
		else {
			cout << "ERROR! Seleccione una opcion valida." << endl;
			pause();
		}

	// El menú se seguirá ejecutando hasta que op = 0 (salir del programa)
	} while(op != 0);

	return 0;
}
