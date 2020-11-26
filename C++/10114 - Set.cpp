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

int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL t ;
    cin >> t ;

    while(t--)
    {
        LL n, sum = 0, half ;
        cin >> n ;
        LL a[n] ;
        for(LL i = 0 ; i < n ; i++)
        {
            cin >> a[i] ;
            sum+= a[i] ;

        }
        if(sum % 2 == 0)
        {
            half = sum / 2 ;
            B arr[half+1][n+1];
            for(LL i = 0 ; i  <= n ; i++)
                arr[0][i] = true;
            for(LL i = 1 ; i <= half ; i++)
                arr[i][0] = false;

            for(LL i = 1 ; i <= half ; i++)
                for(LL j = 1 ; j <= n ; j++)
                {
                    arr[i][j] = arr[i][j-1];
                if(i >= a[j-1])
                    arr[i][j] = arr[i][j] || arr[i - a[j-1]][j-1];
                }

            if(arr[half][n])
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl ;
    }

    return 0 ;
}


