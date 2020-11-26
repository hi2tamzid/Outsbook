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
    LL t, n ;
    cin >> t ;
    while(t--)
    {
        cin >> n;
        string s ;

        I i = 0;
        while(n > 0)
        {
            if(n % 2 == 0)
                s.push_back('0') ;
            else
                s.push_back('1');
            n /= 2 ;
//            cout << s << endl ;
        }

        LL len = s.size() ;
//                cout << "len = " << len << endl ;
        for(i = len - 1 ; i >= 0 ; i--)
            {
                if(s[i] == '0')
                    cout << "#" ;
                else
                    cout << "*" ;
            }
            cout << endl ;
    }
    return 0 ;
}
