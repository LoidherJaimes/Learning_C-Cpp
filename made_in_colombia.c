#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define myPositiveInfinite 2147483647
#define myNegativeInfinite -2147483647
#define MAXN 500001

int Parent(int i){
    return i/2;
}

int Left(int i){
    return i*2;
} 

int Right(int i){
    return 2*i + 1;
}

void Minheapify(int Q[], int i, int heapSize){
    int l, r, least, temp;

    l = Left(i);
    r = Right(i);
    if (l <= heapSize && Q[l] < Q[i])
        least = l;
    else
        least = i;

    if (r <= heapSize && Q[r] < Q[least])
        least = r;
    
    if (least != i)
    {
        temp = Q[i];
        Q[i] = Q[least];
        Q[least] = temp;

        Minheapify(Q, least, heapSize);
    }
}

void MinPQ_DecreaseKey(int Q[], int i, int key){
    int temp;

    if (key > Q[i])
        printf("New key is higher than current\n");
    else
    {
        Q[i] = key;
        while (i > 1 && Q[Parent(i)] > Q[i]) //i llega a la raiz, por lo cual termina el intercambio
        {
            temp = Q[i];
            Q[i] = Q[Parent(i)];
            Q[Parent(i)] = temp;
            i = Parent(i);
        }
        
    }

}

int MinPQ_Extract(int Q[], int *heapSize){
    int min = myNegativeInfinite;

    if (*heapSize < 1)
        printf("Error: Heap underflow.\n");
    else
    {
        min = Q[1];
        Q[1] = Q[*heapSize];
        *heapSize = *heapSize - 1;
        Minheapify(Q, 1, *heapSize);
    }

    return min;
}

void MinPQ_Insert(int Q[], int key, int *heapSize){
    *heapSize = *heapSize + 1;
    Q[*heapSize] = myPositiveInfinite;
    MinPQ_DecreaseKey(Q, *heapSize, key);
}

int main(){
    int min[MAXN + 1], max[MAXN + 1];
    int n, index, element, heapSizeMinimum = 0, heapSizeMaximum= 0, temp;
    double mean;
    long long int median;

    while (scanf("%d", &n) && n > 0)
    {
        median = 0;
        for(index = 1; index <= n; index++)
        {
            scanf("%d", &element);

            if (heapSizeMaximum == 0 || element <= (-1 * max[1]))
                MinPQ_Insert(max, -1*element, &heapSizeMaximum);
            else
                MinPQ_Insert(min, element, &heapSizeMinimum);
        
            if (heapSizeMaximum > heapSizeMinimum + 1)
            {
                temp = -1 * MinPQ_Extract(max, &heapSizeMaximum);
                MinPQ_Insert(min, temp, &heapSizeMinimum);
            }
            else if(heapSizeMinimum > heapSizeMaximum)
            {
                temp = MinPQ_Extract(min, &heapSizeMinimum);
                MinPQ_Insert(max, -1 * temp, &heapSizeMaximum);
            }
            
            median += -1 * max[1];
        }

        mean = (double)median / n;
        printf("%.2lf\n", mean);
        
        while (heapSizeMaximum > 0)
        {
            MinPQ_Extract(max, &heapSizeMaximum);
        }
        while (heapSizeMinimum > 0)
        {
            MinPQ_Extract(min, &heapSizeMinimum);
        }
    }
    return 0;
}