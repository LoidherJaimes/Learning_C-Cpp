#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define myPositiveInfinite 2147483647
#define myNegativeInfinite -2147483647
#define MAXN 100000
#define TRUE 1
#define FALSE 0

int Parent(int i)
{
    return (i/2);
}

int Left(int i)
{
    return (2 * i);
}

int Right(int i)
{
    return (2 * i + 1);
}

void MinHeapify(int Q[], int i, int heapSize)
{
    int l = Left(i);
    int r = Right(i);
    int least;
    int temp;
    
    if (l <= heapSize && Q[l] < Q[i])
        least = l;
    else
        least = i;
    if (r <= heapSize && Q[r] < Q[least])
        least = r;
    if (least != i){
        temp = Q[i];
        Q[i] = Q[least];
        Q[least] = temp;
        MinHeapify(Q, least, heapSize);
    }
}

int MinPQ_Minimum(int Q[])
{
    return Q[1];
}

int MinPQ_Extract(int Q[], int *heapSize)
{
    int min = myNegativeInfinite;
    
    if (*heapSize < 1)
    {
        printf("Heap underflow.\n");
    }
    else
    {
        min = Q[1];
        Q[1] = Q[*heapSize];
        *heapSize = *heapSize - 1;
        MinHeapify(Q, 1, *heapSize);
    }
    return min;
}

void MinPQ_DecreaseKey(int Q[], int i, int key)
{
    int temp;
    
    if (key > Q[i])
        printf("New key is higher than current key.\n");
    else
    {
        Q[i] = key;
        while (i > 1 && Q[Parent(i)] > Q[i]){
            temp = Q[i];
            Q[i] = Q[Parent(i)];
            Q[Parent(i)] = temp;
            i = Parent(i);
        }
    }
}

void MinPQ_Insert(int Q[], int key, int *heapSize)
{
    *heapSize = *heapSize + 1;
    Q[*heapSize] = myPositiveInfinite;
    MinPQ_DecreaseKey(Q, *heapSize, key);
}

int main()
{
    int heap[MAXN + 1], n, heapSize = 0, i, impossible;
    long long x, currentID;

    while(scanf("%d", &n) != EOF)
    {
        heapSize = 0;
        impossible = TRUE;

        for (i = 1; i < n; i++)
        {
            scanf("%lld", &x);
            MinPQ_Insert(heap, x, &heapSize);
        }

        currentID = MinPQ_Extract(heap, &heapSize);
        for (i = 1; i < n - 1; i++){
            if(heapSize > 0){
                if(currentID + 1 == MinPQ_Minimum(heap))
                    currentID = MinPQ_Extract(heap, &heapSize);
                else{
                    impossible = FALSE;
                    currentID++;
                    break;
                }
            }
        }
        if (impossible == TRUE)
                    printf("IMPOSSIBLE\n");
                else
                    printf("%lld\n", currentID);
    }

    return 0;
}