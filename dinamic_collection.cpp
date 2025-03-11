#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAXN 2000000
#define infinity 2147483647

int C[MAXN + 1];

int BinarySearch(int A[], int i, int j, int k){
    int r = -1, m;
    
    while (i <= j){
        m = (i + j) / 2;
        if (k == A[m]){
            r = m;
            break;
        }
        else{
            if (k > A[m])
            i = m + 1;
            else
            j = m - 1;
        }
    }
    
    if(r == -1)
        r = -1 * i -1;
    
    return r;
}

int BinarySearchFirstOccurrence(int A[], int i, int j, int k){
    int r, r2;
    r = BinarySearch(A, i, j, k);
    
    if (r >= 0){
        r2 = BinarySearch(A, i, r - 1, k);
        while (r2 >= 0){
            r = r2;
            r2 = BinarySearch(A, i, r - 1, k);
        }
    }
    return r;
}

int BinarySearchLastOccurrence(int A[], int i, int j, int k){
    int r, r2;
    r = BinarySearch(A, i, j, k);
    
    if (r >= 0){
        r2 = BinarySearch(A, r + 1, j, k);
        while (r2 >= 0){
            r = r2;
            r2 = BinarySearch(A, r + 1, j, k);
        }
    }
    return r;
}

void myMerge (int A[], int p, int q, int r) {
    int n1 = q - p + 1, n2 = r - q, i, j, k;
    int L[n1 + 2], R[n2 + 2];
    
    for (i = 1; i <= n1; i++) L[i] = A[p+i-1];

    for (j = 1; j <= n2; j++) R[j] = A[q+j];

    L[n1+1] = infinity;
    R[n2+1] = infinity;
    i = 1;
    j = 1;

    for(k = p; k <= r; k++) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

void MergeSort (int A[], int p, int r) {
    int q;
    if (p < r) {
        q =  (p + r) / 2;
        MergeSort(A, p, q);
        MergeSort(A, q + 1, r);
        myMerge(A, p, q, r); 
    }
}

int option1(int k, int C[], int n){
    int position = BinarySearch(C, 1, n, k), isAdded = 0;
    
    if (position < 0){
        position =  (-1) * position - 1;
        
        if(position > n){
            C[n + 1] = k;
            isAdded = 1;
        }
        else
            C[position] = k;
    } 
    return isAdded;
}

int option2(int A[], int a, int b, int n){
    int begin, end = 0, occurrences;
    
    begin = BinarySearchFirstOccurrence(A, 1, n, a);
    end = BinarySearchLastOccurrence(A, 1, n, b);

    if (begin < 0){
        begin = (-1) * begin - 1;
    }
    if (end < 0){
        end = (-1) * end - 2;
    }
    
    occurrences = end - begin + 1;

    return occurrences;
}

int main (){
    int n, q, a, b, k, option, i, j, newSize, occurrences;
    
    scanf("%d %d", &n, &q);
    
    
    for(i = 1; i <= n; i++){
        scanf("%d", &C[i]); 
    }

    MergeSort(C, 1, n);
    
    for(j = 1; j <= q; j++){
        
        scanf("%d", &option);
        
        if(option == 1){
            scanf("%d", &k);
            newSize = option1(k, C, n);
            if (newSize == 1)
                n = n+1; 
        }
        else{
            scanf("%d %d", &a, &b);
            occurrences = option2(C, a, b, n);
            printf("%d\n", occurrences);
        }
    }

    return 0;
}