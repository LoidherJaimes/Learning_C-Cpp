#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define INF_POS 2147483647
#define INF_NEG -2147483647
#define MAX_CAPACITY 1000000

typedef struct {
    char nombre[20];
    int prioridad;
    int ordenLlegada;
} Paciente;

int padre(int i) {
    return i / 2;
}

int hijoIzq(int i) {
    return i * 2;
}

int hijoDer(int i) {
    return 2 * i + 1;
}

void ajustarHeap(Paciente cola[], int i, int tamHeap) {
    int izq = hijoIzq(i);
    int der = hijoDer(i);
    int menor = i;
    Paciente aux;

    if (izq <= tamHeap && 
        (cola[izq].prioridad < cola[i].prioridad || 
        (cola[izq].prioridad == cola[i].prioridad && cola[izq].ordenLlegada < cola[i].ordenLlegada)))
        menor = izq;

    if (der <= tamHeap && 
        (cola[der].prioridad < cola[menor].prioridad || 
        (cola[der].prioridad == cola[menor].prioridad && cola[der].ordenLlegada < cola[menor].ordenLlegada)))
        menor = der;

    if (menor != i) {
        aux = cola[i];
        cola[i] = cola[menor];
        cola[menor] = aux;

        ajustarHeap(cola, menor, tamHeap);
    }
}

void extraerMin(Paciente cola[], int *tamHeap) {
    if (*tamHeap < 1) {
        printf("Heap underflow.\n");
    } else {
        cola[1] = cola[*tamHeap];
        (*tamHeap)--;
        ajustarHeap(cola, 1, *tamHeap);
    }
}

void disminuirClave(Paciente cola[], int i, Paciente nuevo) {
    Paciente aux;

    if (nuevo.prioridad > cola[i].prioridad) {
        printf("Invalid key\n");
    } else {
        cola[i] = nuevo;
        while (i > 1 && cola[padre(i)].prioridad > cola[i].prioridad) {
            aux = cola[i];
            cola[i] = cola[padre(i)];
            cola[padre(i)] = aux;
            i = padre(i);
        }
    }
}

void insertarPaciente(Paciente cola[], Paciente nuevo, int *tamHeap) {
    (*tamHeap)++;
    cola[*tamHeap].prioridad = INF_POS;
    disminuirClave(cola, *tamHeap, nuevo);
}

int main() {
    Paciente colaPacientes[MAX_CAPACITY + 1], nuevoPaciente;
    char entrada[21];
    int tamHeap = 0, contadorOrden = 1;

    while (scanf("%20s", entrada) != EOF) {
        if (strcmp(entrada, "V") == 0) {
            if (tamHeap == 0) {
                printf("\n");
            } else {
                printf("%s\n", colaPacientes[1].nombre);
                extraerMin(colaPacientes, &tamHeap);
            }
        } else {
            strcpy(nuevoPaciente.nombre, entrada);
            scanf("%d", &nuevoPaciente.prioridad);
            nuevoPaciente.prioridad *= -1;
            nuevoPaciente.ordenLlegada = contadorOrden;
            insertarPaciente(colaPacientes, nuevoPaciente, &tamHeap);
            contadorOrden++;
        }
    }

    return 0;
}