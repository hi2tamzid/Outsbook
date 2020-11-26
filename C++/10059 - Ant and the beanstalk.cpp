#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <vector>
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
unsigned long int binomialCoeff(unsigned int n, unsigned int k)
{
    unsigned long int res = 1;

    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

unsigned long int catalan(unsigned int n)
{
    unsigned long int c = binomialCoeff(2*n, n);

    return c/(n+1);
}
int main()
{
#if test
    FILE *input, *output ;
    input = fopen("input.txt", "r") ;
    output = fopen("output.txt", "w") ;
#endif
    LL t, n, k  = 1 ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        LL sqrt_n = sqrt(n) ;
        cout << "Case " << k << ": " << catalan(sqrt_n) * (sqrt_n + 1) << endl ;
        k++ ;
    }
    return 0 ;
}
