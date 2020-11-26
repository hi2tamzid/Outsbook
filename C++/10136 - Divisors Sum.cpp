#include <bits/stdc++.h>

#define test 0
#define pi acos(-1.0)
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) (((x) > 0) ? (x) : (-(x)))

short int prime[1000010] ;
int prime_factors[1000010], primes[1000010], total ;
void sieve() ;
using namespace std ;
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    sieve() ;
    long long t, n ;
    cin >> t ;

    while(t--)
    {
        cin >> n ;
        long long result = 1, i = 0, base, mainbase, sqrt_n = sqrt(n) ;
        while(i < total && primes[i] <= sqrt_n)
        {
            base = 1, mainbase = 1 ;
            if(n % primes[i] == 0)
            {

                while(n % primes[i] == 0)
                {
                    n /= primes[i] ;
                    mainbase *= primes[i] ;
                    base += (mainbase) ;
                }
                sqrt_n = sqrt(n) ;
            }
            result *= base ;
            i++ ;
       }
       if(n != 1)
        result *= (1+n) ;
        printf("%lld\n", result) ;
    }
    return 0 ;
}

void sieve()
{
    long long n = 1000000 ;
    long long sqrt_n = sqrt(n) ;
    memset(prime , 0 , sizeof prime) ;
    prime[0] = prime[1] = 1 ;
    for(int i = 4 ; i <= n ; i += 2)
        prime[i] = 1 ;

    for(int i = 3 ; i <= sqrt_n ; i += 2)
        if(prime[i] == 0)
        {
            for(int j = i * i ; j <= n ; j += 2 * i)
                prime[j] = 1 ;
        }
        int j = 0 ;
        for(int i = 2 ; i <= n ; i++)
            if(prime[i] == 0)
                primes[j++] = i ;

    total = j - 1 ;
}
