#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long y ;
    while(scanf("%lld", &y) && y != 0)
    {
        long long total = 1, year = 2017 ;
//
//        while(year < y )
//        {
//            total += (y - year) ;
//             year += 3 ;
//        }
//        printf("%lld\n", total) ;
        long long i = 0, count = -1 ;
        while(year <= y)
        {
            total += i ;
            total ;
            year++ ;
            count++ ;
            if(count == 2)
            {
                i++ ;
                count = -1 ;
            }
        }
        printf("%lld\n", total) ;
    }
    return  0 ;
}
