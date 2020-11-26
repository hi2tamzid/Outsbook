#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <math.h>
#include <cctype>
#include <climits> /// new included. still under construction...
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
template<typename a>
a SWAP(a &b, a &c)
{
    a d = b ;
    b = c ;
    c = d ;
}
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL t, cas = 1 ;
    cin >> t ;
    while(t--)
    {
        LL n, k, p ;
        cin >> n >> k >> p ;

        LL result = (k+p) % n ;
        if(result == 0)
            result = n ;
        cout << "Case " << cas << ": " << result << endl ;
        cas++ ;
    }
    return 0 ;

}

