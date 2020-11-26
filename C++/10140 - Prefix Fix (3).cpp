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
    S a ;
    while(cin >> a)
    {
        S b = "", result = "" ;
        LL last = a.size()-1 ;
        for(LL i = 0, j = last ; last > 0 ; last--)
        {

            j = last ;
            i = 0 ;
            if(a[i] == a[j])
            {
                b = "" ;
                for(; j < a.size() ; j++, i++)
                {

                    if(a[i] == a[j])
                    {
                        b.push_back(a[i]) ;
                    }
                    else
                        break ;
                }
                if(j == a.size())
                    {

                        result = b ;
                    }
                else
                    b = "" ;

            }
        }
        if(result == "")
            cout << "Fix" << endl ;
        else
            cout << result << endl ;
    }
    return 0 ;

}

