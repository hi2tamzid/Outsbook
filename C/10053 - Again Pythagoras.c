#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) (((x) > 0) ? (x) : (-(x)))
typedef int I ;
typedef short int SI ;
typedef unsigned short int USI ;
typedef long int L ;
typedef long long int LL ;
typedef float F ;
typedef double D ;
typedef char C ;

LL gcd(LL a, LL b)
{
    if(b % a == 0)
        return a ;
    else if(b > a)
    return gcd(b % a, a) ;
    else
        return gcd(b, a) ;
}
LL gen_triplet(LL n)
{
    LL i, a, b, c, j, k,store, count = 0, c_a, c_b, c_c  ;

    for(i = 1 ; i <= n ; i++)
    {
        k = 1 ;
        for(j = i + 1 ; i <= n ; j++)
        {
            if(gcd(i, j) != 1 || (i % 2 == 1 && j % 2 == 1) )
                continue ;
            a = (j * j) - (i * i ) ;
            b = 2 * i * j ;
            c = (j * j ) + (i * i) ;
            if(a <= n && b <= n && c <= n)
                {
                    count++ ;
                    c_a = a, c_b = b, c_c = c ;
                    while(1)
                    {
                        a += c_a ;
                        b += c_b ;
                        c += c_c ;
                        if(a <= n && b <= n && c <= n)
                            count++ ;
                        else
                            break ;
                    }
                }
            else
                break ;
            if(k == 1)
            {
                j++ ;
                k = 0 ;
            }
        }
    }
    return count ;
}
int main()
{
    LL n, result, t ;
    scanf("%lld", &t) ;
    while(t--)
    {
        scanf("%lld", &n) ;
        result = gen_triplet(n) ;
        printf("%lld\n", result) ;
    }
    return 0;
}
