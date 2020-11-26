#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <math.h>
#include <cctype>
#include <vector>
#include <map>
#include <stdexcept>
#include <exception>
#include <fstream>
#include <algorithm>
#include <ios>

#define test 0
#define pi acos(-1.0)
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ABS(x) (((x) > 0) ? (x) : (-(x)))
using namespace std ;

typedef int I ;
typedef short int SI ;
typedef long L ;
typedef long long LL ;
typedef unsigned long long ULL ;
typedef float F ;
typedef double D ;
typedef long double LD ;
typedef char C ;
typedef bool B ;
typedef string S ;
typedef vector<I> VI ;
typedef vector<I>::iterator VIT ;
typedef vector<L> VL ;
typedef vector<L>::iterator VLT ;
typedef vector<LL> VLL ;
typedef vector<LL>::iterator VLLT ;
typedef vector<C> VC ;
typedef vector<C>::iterator VCT ;

VLL prime ;
VLL primes ;
void sieve()
{
    LL n = 10000000 ;
    LL sqrt_n = sqrt(n) ;

    for(LL i = 0 ; i < 10000000 ; i++)
    {
        prime.push_back(0) ;
    }
    prime[0] = prime[1] = 1 ;

    for(LL i = 4 ; i <= n ; i += 2)
    {
        prime[i] = 1 ;
    }

    for(LL i = 3 ; i <= sqrt_n ; i += 2)
    {
        if(prime[i] == 0)
        {
            for(LL j = i * i ; j <= n ; j += 2 * i)
            {
                prime[j] = 1 ;
            }
        }
    }
    LL j = 0 ;
    for(LL i = 1 ; i <= n ; i++)
    {
        if(prime[i] == 0)
            primes.push_back(i) ;
    }

}
LL gcd(LL a, LL b)
{

    while(b)
    {
        a = a % b ;
        swap(a, b) ;
    }
    return a ;
}

int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
sieve() ;
    LL t, n, k = 1 ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        LL p_size = primes.size(), sqrt_n  = sqrt(n), result = 1 ;
        for(LL i = 0 ; i <  p_size && primes[i] <= sqrt_n ; i++)
        {
            LL p = 0 ;
            if(n % primes[i] == 0)
            {
                while(n % primes[i] == 0)
                {
                    n /= primes[i] ;
                    p++ ;
                }
                sqrt_n = sqrt(n) ;
                p++ ;
                result *= p ;

            }

        }
        if(n != 1)
            result *= 2 ;
        result-- ;
        cout << "Case " << k << "# " << result << endl ;
        k++ ;
    }
    return 0 ;
}
