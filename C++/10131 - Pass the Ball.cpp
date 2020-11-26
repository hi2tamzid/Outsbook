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
    LL t, n ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        LL a[n+1] ;
        for(LL i = 1 ; i <= n ; i++)
        {
            cin >> a[i] ;
        }

        LL m ;
        cin >> m ;
        LL b,c, found ;
        for(LL i = 0 ; i < m ; i++)
        {
            found = 0 ;
            cin >> b >> c ;
            if(a[b] == -1 || a[c] == -1)
            {
                a[b] = -1 ;
                cout << "Impossible" << endl ;
                continue ;
            }
            if(gcd(a[b], a[c]) != 1)
            {
                cout << 1 << endl ;
                continue ;
            }

            LL copy_a[n+1] ;

            for(LL j = 1 ; j <= n ; j++)
                copy_a[j] = a[j] ;
//            copy_a[b] = -1 ;
            LL count = 0 ;
            for(LL j = 1, k = b ; j <= n ; j++)
            {
                if(j == k || j == c || copy_a[j] == -1)
                    continue ;
                if(gcd(copy_a[j], copy_a[k]) != 1)
                {
                    if(gcd(copy_a[j], copy_a[c]) != 1)
                    {
                        count++ ;
                        found = 1 ;
                        count++ ;
                        break ;
                    }
//                    copy_a[j] = -1 ;
//                    k = j ;

                }
            }
            if(found == 1)
                cout << count << endl ;
            else
            {
                a[b] = -1 ;
                cout << "Impossible" << endl ;
            }
        }
    }
    return 0 ;
}
