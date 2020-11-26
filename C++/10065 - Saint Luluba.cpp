#include <bits/stdc++.h>

using namespace std ;

long long find_x_y(long long a, long long b, long long &x, long long &y) ;

int main()
{
    long long int a, b, x, y, g, k = 1 ;
    while(scanf("%lld %lld", &a, &b) != EOF)
    {

        long long g = find_x_y(a, b, x, y) ;

        printf("Case %lld: %lld x %lld + %lld x %lld = %lld\n", k++, a, x, b, y, g) ;
    }
    return 0 ;
}


long long find_x_y(long long a, long long b, long long &x, long long &y)
{
    long long x1 = 1, y1 = 0, x2 = 0, y2 = 1, r1 = a, r2 = b, q, r, c_x, c_y ;
    while(r2 != 0)
    {
        q = r1 / r2 ;
        r = r1 % r2 ;
        c_x = x1 - q * x2 ;
        c_y = y1 - q * y2 ;
        x1 = x2 ;
        y1 = y2 ;
        x2 = c_x ;
        y2 = c_y ;

        r1 = r2 ;
        r2 = r ;
    }
    x = x1 ;
    y = y1 ;
    return r1 ;
}
