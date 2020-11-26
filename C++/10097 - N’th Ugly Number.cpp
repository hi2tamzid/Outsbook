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

LL ugly[1600] ;
void ugly_numbers()
{
    ugly[1] = 1 ;

    LL i3, i5, i7 ;
    i3 = i5 = i7 = 1 ;

    for(LL i = 2 ; i < 1510 ; i++)
    {
        LL next_ugly = MIN(MIN(ugly[i3] * 3, ugly[i5] * 5), ugly[i7] * 7 ) ;

        ugly[i] = next_ugly ;

        if(next_ugly == ugly[i3] * 3)
            i3++ ;
        if(next_ugly == ugly[i5] * 5)
            i5++ ;
        if(next_ugly == ugly[i7] * 7)
            i7++ ;
    }
}
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    ugly_numbers() ;

    LL t, k = 1 ;
    cin >> t ;
    while(t--)
    {
        LL n ;
        cin >> n ;
        cout << "Case " << k++ << ": " << ugly[n] << endl ;
    }
    return 0 ;
}
