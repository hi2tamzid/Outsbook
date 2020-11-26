#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
double catalan[35] ;

double cal(double n)
{
    double k ;
    double a ;
    for(k = 2, a = 1 ; k <= n ; k++)
    {
        a = a * (((double)(n + k)/ k)) ;
    }
    return a ;
}
void catalangen()
{
    long long i ;
    double  n = 1 ;
    for(i = 0 ; i < 33 ; i++, n++)
    {
        catalan[i] = cal(i) ;
    }
}
int main()
{
    catalangen() ;
    long long n, t, k = 1 ;
    scanf("%lld", &t) ;
    while(t--)
    {
        scanf("%lld", &n) ;
        n = sqrt(n) ;
        n = catalan[n]  * (n + 1);
        printf("Case %lld: %lld\n", k, n) ;
        k++ ;
    }
    return 0;
}
