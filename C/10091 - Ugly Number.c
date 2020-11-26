#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)


int main()
{
    long long int t, n, i, j, check,k = 1 ;
    scanf("%lld", &t) ;
    while(t--)
    {
        check = 0 ;
        scanf("%lld", &n) ;
        long long int sqr = sqrt(n), store[10100];
        i = 2 ; j = 0 ;
        while(n % 3 == 0)
            n /= 3 ;
        while(n % 5 == 0)
            n /= 5 ;
        while(n % 7 == 0)
            n /= 7 ;

        if(n != 1)
            check = 1 ;

            if(check == 0)
                printf("Case %lld: Yes\n", k) ;
            else
                printf("Case %lld: No\n", k) ;
        k++ ;
    }
    return 0;
}


