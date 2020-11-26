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
    S s ;
    while(cin >> s)
    {
        LL len = s.length(), on = 0 ;
        S sub_s ;

        for(LL i = 0 ; i < len / 2 ; i++)
        {
            cout << s[i] << "==" << s[len-i-1] << endl ; ;
            if(s[i] == s[len-i-1])
            {
                on = 1 ;
                LL j = len-i-1, k = 0 ;
                while(j < len)
                {
                    sub_s[k++] = s[j++] ;
                }

                sub_s[k] = '\0' ;
            }
            else
                break ;
        }

        if(on)
            cout << sub_s << endl ;
        else
            cout << "Fix" << endl ;

    }
    return 0 ;
}

