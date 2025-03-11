#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{   
    unsigned long long int n, k, kplus1;

    while(scanf("%llu", &n) && (n!=0))
    {
        k = (-1 + sqrt(1 + 8 * (double)n)) / 2;
        kplus1 = k+1;
        
        if(k % 2 == 0)
            {
                k /= 2;
            }
        if(kplus1 % 2 == 0)
            {
                kplus1 /= 2;
            }
        
        if(k * kplus1 == n)
            {
                printf("YES\n");
            }
        else
            {
                printf("NO\n");
            }
    }
    return 0;
}