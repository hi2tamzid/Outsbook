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
#include <queue>
#include <stack>
#include <stdexcept>
#include <exception>
#include <fstream>
#include <algorithm>
#include <ios>

#define test 0
#define pi acos(-1.0)
#define eps 1e-8
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

LL power(LL a, LL b)
{
   LL result = 1 ;
   while(b)
   {
       if(b&1)
        result = a * result ;
       a *= a ;
       b >>= 1 ;
   }
   return result ;
}
long long power(long long a, long long b, long long p)
{
    long long result = 1 % p;

    a = a % p ;

    while(b > 0)
    {
        if(b & 1)
            result = (result * a) % p ;

        b = b >> 1 ;
        a = (a * a) % p ;
    }
    return result ;
}
S n ;
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    n = "" ;
    while(cin >> n && n != "-1")
    {
        while(n[0] == '0' && n.size() > 1)
            n.erase(n.begin()) ;

        LL sum = 0 ;
        for(LL i = 0 ; i < n.size() ; i++)
        {
            sum = sum  + (power(n[i]-'0',n[i]-'0', 10) % 10) ;
        }
        cout << (sum % 10) << endl ;
    }
    return 0 ;
}


