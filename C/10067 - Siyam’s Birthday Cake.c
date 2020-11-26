#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)

typedef long long LL ;
int main()
{
    LL n, sqr_n, friends, siyam, kutta ;
    while(scanf("%lld", &n) && n >= 0)
    {
        sqr_n = ((n * (n + 1)) / 2) + 1 ;

        friends = sqr_n / (n+1) ;
        kutta = friends * (n+1) ;

        sqr_n = sqr_n - kutta ;
        siyam = friends + sqr_n ;
        printf("%lld\n", siyam) ;
    }
    return 0;
}
