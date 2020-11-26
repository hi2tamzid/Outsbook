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
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL t, k = 1 ;
    cin >> t ;
    while(t--)
    {
        LL n, total = 0 ;
        cin >> n ;
        VI a ;
        VIT it ;
        LL in ;
        for(LL i = 0 ; i < n ; i++)
        {
            cin >> in ;
            a.push_back(in) ;
        }

        while(a.size() > 2)
        {
            LL high = MAX(a[0], a[1]), low = MIN(a[0], a[1]) ;
            LL high_index = 1, low_index = 0 ;
            if(a[0] > a[1])
            {
                high_index = 0 ;
                low_index = 1 ;
            }

            for(LL i = 2 ; i < a.size() ; i++)
            {
                if(a[i] < low)
                {
                    high = low ;
                    high_index = low_index ;
                    low = a[i] ;
                    low_index = i ;
                }
                else if(a[i] < high)
                {
                    high = a[i] ;
                    high_index = i ;
                }
            }

            total += (high + low) ;
            a.push_back((high + low)) ;

            if(low_index > high_index)
            {
                a.erase(a.begin() + low_index) ;
                a.erase(a.begin() + high_index) ;
            }
            else
            {
                a.erase(a.begin() + high_index) ;
                a.erase(a.begin() + low_index) ;
            }
        }

        cout << "Case " << k++ << ": Cost=" <<  (total + a[0] + a[1]) << endl ;
    }
    return 0 ;
}
