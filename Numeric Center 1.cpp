#include <stdio.h>

int binary_search_modified(int arr[], int size, int n) {
    int low = 0, high = size - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= n) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return result;
}

int main() {
    const int MAX_M = 1000000;
    int m_centros[MAX_M];
    int index = 0;

    for (int i = 1; i < MAX_M; i++){
        long long a = (long long)(i - 1) * i / 2;
        long long term = (long long)(2 * i + 1);
        double disc = sqrt((double)(term * term + 8LL * a));
        double res = ( - (2 * i + 1) + disc) / 2.0;
        
        if (res == (int)res){
            m_centros[index] = i + (int)res;
            index++;
        }
    }
    
    int n;
    while (scanf("%d", &n) && n > 0){
        int result = binary_search_modified(m_centros, index, n);
        printf("%d\n", result);
    }
    return 0;
}
