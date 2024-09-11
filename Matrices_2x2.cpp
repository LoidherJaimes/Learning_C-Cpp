#include <iostream>
// Este es para matrices 2x2
const int MAX_SIZE = 2; // Este es el orden máximo de las matrices
using namespace std;

// Función para almacenar valores en una matriz
void llenarM(int A[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; ++i) {
        for (int j = 0; j < MAX_SIZE; ++j) {
            cout << "Posicion [" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }
}

// Función para crear una matriz
void crearM(int A[MAX_SIZE][MAX_SIZE]) {
    cout << "\nLlene la matriz de tamano " << MAX_SIZE << "x" << MAX_SIZE << endl;
    llenarM(A);
}

// Función para mostrar matriz en pantalla
void mostrarM(int A[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; ++i) {
        for (int j = 0; j < MAX_SIZE; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

//---------------------------------FUNCIONES DE OPERACIONES--------------------------

// Suma de Matrices
void sum(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Resta de Matrices
void rest(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

// Multiplicación por escalar
void escMul(int A[MAX_SIZE][MAX_SIZE], int escalar, int C[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            C[i][j] = A[i][j] * escalar;
        }
    }
}

// Multiplicación entre matrices
void mult(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            C[i][j] = 0;
            for (int k = 0; k < MAX_SIZE; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Transposición de una Matriz
void trans(int A[MAX_SIZE][MAX_SIZE], int C[MAX_SIZE][MAX_SIZE]) {
    for (int i = 0; i < MAX_SIZE; i++) {
        for (int j = 0; j < MAX_SIZE; j++) {
            C[i][j] = A[j][i];
        }
    }
}

// Hallar determinante
int det(int A[MAX_SIZE][MAX_SIZE]) {
    return A[0][0] * A[1][1] - A[0][1] * A[1][0];
}

// Calcular Matriz Inversa
bool inv(int A[MAX_SIZE][MAX_SIZE], float C[MAX_SIZE][MAX_SIZE]) {
    int determinante = det(A);
    if (determinante == 0) {
        cout << "La matriz no tiene inversa (determinante es 0)." << endl;
        return false;
    }

    C[0][0] =  A[1][1] / (float)determinante;
    C[0][1] = -A[0][1] / (float)determinante;
    C[1][0] = -A[1][0] / (float)determinante;
    C[1][1] =  A[0][0] / (float)determinante;
    return true;
}

//-----------------------------------Función principal
int main() {
    int op;
    int M1[MAX_SIZE][MAX_SIZE];
    int M2[MAX_SIZE][MAX_SIZE];
    int M3[MAX_SIZE][MAX_SIZE];
    float M4[MAX_SIZE][MAX_SIZE];

    do {
        cout << "\nOperaciones con matrices " << MAX_SIZE << "x" << MAX_SIZE << endl;
        cout << "1) Sumar dos matrices." << endl;
        cout << "2) Restar dos matrices." << endl;
        cout << "3) Multiplicar matriz por un escalar." << endl;
        cout << "4) Multiplicacion de matrices." << endl;
        cout << "5) Transposicion de una matriz." << endl;
        cout << "6) Determinante de una matriz." << endl;
        cout << "7) Inversa de una matriz.\n" << endl;
        cout << "0) Salir.\n" << endl;
        cin >> op;

        switch (op) {
        case 1:
            cout << "\nCrear matriz A...\n" << endl;
            crearM(M1);
            cout << "\nCrear matriz B...\n" << endl;
            crearM(M2);

            sum(M1, M2, M3);
            cout << "\nResultado de la suma:\n" << endl;
            mostrarM(M3);
            break;
            
        case 2:
            cout << "\nCrear matriz A...\n" << endl;
            crearM(M1);
            cout << "\nCrear matriz B...\n" << endl;
            crearM(M2);

            rest(M1, M2, M3);
            cout << "\nResultado de la resta:\n" << endl;
            mostrarM(M3);
            break;

        case 3:
            int escalar;
            cout << "\nCreando la matriz...\n" << endl;
            crearM(M1);
            cout << "\nDigite el escalar:\n";
            cin >> escalar;

            escMul(M1, escalar, M3);
            cout << "\nResultado de la multiplicacion por escalar:\n" << endl;
            mostrarM(M3);
            break;

        case 4:
            cout << "\nCrear matriz A...\n" << endl;
            crearM(M1);
            cout << "\nCrear matriz B...\n" << endl;
            crearM(M2);

            mult(M1, M2, M3);
            cout << "\nResultado de la multiplicacion de matrices:\n" << endl;
            mostrarM(M3);
            break;

        case 5:
            cout << "\nCrear matriz A...\n" << endl;
            crearM(M1);

            trans(M1, M3);
            cout << "\nResultado de la transposicion:" << endl;
            mostrarM(M3);
            break;

        case 6:
            cout << "\nCrear matriz A...\n" << endl;
            crearM(M1);

            cout << "\nDeterminante de la matriz A: " << det(M1) << endl;
            break;

        case 7:
            cout << "\nCrear matriz A...\n" << endl;
            crearM(M1);

            if (inv(M1, M4)) {
                cout << "\nMatriz inversa:\n" << endl;
                for (int i = 0; i < MAX_SIZE; ++i) {
                    for (int j = 0; j < MAX_SIZE; ++j) {
                        cout << M4[i][j] << " ";
                    }
                    cout << endl;
                }
            }
            break;

        case 0:
            cout << "\nGracias por usar el programa. :)" << endl;
            break;

        default:
            cout << "\nOpcion no valida." << endl;
            break;
        }

    } while (op != 0);

    return 0;
}
