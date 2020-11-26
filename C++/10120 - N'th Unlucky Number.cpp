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

LL unlucky[60010] ;

void gen_unlucky()
{

    unlucky[0] = 1 ;
//    cout << (int)1 << " = " << unlucky[0] << endl ;
    LL base = 13, i = 1 ;
    while(i < 60001)
    {
        unlucky[i++] = base ;
//        cout << (int)i - 1 << " = " << unlucky[i-1] << endl ;
        LL curr = i ;
        for(LL j = 0 ; j < curr - 1 && i < 60001 ; j++)
        {
            unlucky[i++] = unlucky[j] + base ;
//            cout << (int)i - 1 << " = " << unlucky[i-1] << endl ;

        }
        base *= 13 ;
    }
}
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    gen_unlucky() ;
    LL t, n, k = 1 ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;

        cout << "Case " << k << ": " << unlucky[n-1] << endl ;
        k++ ;
    }
    return 0 ;
}
