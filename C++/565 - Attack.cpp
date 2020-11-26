#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <math.h>
#include <cctype>
#include <climits>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <stdexcept>
#include <exception>
#include <fstream>
#include <algorithm>
#include <ios>
#include <bitset>
#include <sstream>

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
void SWAP(a &b, a &c)
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
LL gcd(LL a, LL b)
{
    while(b)
    {
        a = a % b;
        SWAP(a,b);
    }
    return a;

}

LL lcm(LL a, LL b)
{
    return (a * (b / gcd(a,b)));
}
int main()
{
#if test
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    LL r1, c1, r2, c2, i = 1;
    while(cin >> r1 >> c1 >> r2 >> c2)
    {
        LL r = ABS(r1-r2);
        LL c = ABS(c1 - c2);
        if(r == c)
        {
            printf("Case %lld: 1\n", i);
        }
        else
        {
            if(r1 > r2)
                {
                    SWAP(r1,r2);
                    SWAP(c1,c2);
                }

            LL small_r = r1;
            LL diff = (r2 - r1);
            c2  = c2 - diff;
            if(ABS(c2-c1)% 2 == 0)
                printf("Case %lld: 2\n", i);
            else
                printf("Case %lld: impossible\n", i);
        }
        i++;
    }
    return 0 ;
}


