#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long t ;
    scanf("%lld", &t) ;
    while(t--)
    {
        long long n, s, r ;
        scanf("%lld", &n) ;

        s = ((n * (n + 1)) * ((2 * n) + 1 )) / 6 ;
        r = (((n) * (n + 1) * (n) * (n+1)) / 4) ;
        r -= s ;
        printf("%lld %lld\n", s, r) ;

    }
    return 0 ;
}
