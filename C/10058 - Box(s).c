#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    long long n, k = 1 ;
    while(scanf("%lld", &n) != EOF)
    {
        if(n == 0)
        return 0 ;
        long long i , a[10010], first = 0, last = -10010;
        for(i = 0 ; i < n ; i++)
        {
            scanf("%lld", &a[i]) ;
            first += a[i] ;

            if(first > last)
                last = first ;
            if(first < 0)
                first = 0 ;
        }

        printf("Set %lld: %lld\n", k, last) ;
        k++ ;
    }
    return 0;
}
