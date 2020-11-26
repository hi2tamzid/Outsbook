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
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL n, k = 1 ;

    while(cin >> n)
    {
        LL a[n], b[n] ;
        for(LL i = 0 ; i < n ; i++)
            cin >> a[i] >> b[i] ;

        LL count = 1, m = LLONG_MIN ;

//        for(LL i = 0 ; i < n ; i++)
//        {
//            for(LL j = 0 ; i < n - 1 ; i++)
//            {
//                if(a[j] > a[j+1])
//                {
//                    LL temp = a[j] ;
//                    a[j] = a[j+1] ;
//                    a[j+1] = temp ;
//                    temp = b[j] ;
//                    b[j] = b[j+1] ;
//                    b[j+1] = temp ;
//                }
//            }
//        }
//        LL first = a[0], last = b[0] ;
//        for(LL i = 1 ; i < n ; i++)
//        {
//            if(first <= a[i] && a[i] < last)
//                count++ ;
//        }
        for(LL i = 0 ; i < n; i++)
        {
            count = 1 ;
            LL first = a[i], last = b[i] ;
            for(LL j = 0 ; j < n ; j++)
            {
                if(j == i)
                    continue ;
                    if(first <= a[j] && first < b[j] && a[j] < last && b[j] <= last)
                    {
                        count++ ;
                    }
//                else
//                {
//                    if(!(first <= a[j] && a[j] < last))
//                    {
//                        count++ ;
//                    }
//                }
            }
            m = m < count ? count : m ;
        }

        cout << "Case " << k << ": " << m << endl ;
        k++ ;
    }
    return 0 ;
}
