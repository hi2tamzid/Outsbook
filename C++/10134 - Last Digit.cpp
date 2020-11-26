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

LL last(C a)
{
    switch(a)
    {
        case '0': return 1 ;
        break ;
        case '1': return 1 ;
        break ;
        case '2': return 4 ;
        break ;
        case '3': return 27 ;
        break ;
        case '4': return 256 ;
        break ;
        case '5': return 3125 ;
        break ;
        case '6': return 46656 ;
        break ;
        case '7': return 823543 ;
        break ;
        case '8': return 16777216 ;
        break ;
        case '9': return 387420489 ;
        break ;
        default:
            return 0 ;
            break ;
    }
}
int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    C a ;
    while(a = getchar())
    {
        if(a == 10)
            continue ;
        if(a == '-')
        {
            a = getchar() ;
            if(a == '1')
                return 0 ;
        }
//        cout << "ash" << endl ;

        LL result = last(a), first_zero = 0;
        if(a == '0')
        {
            result = 0 ;
            first_zero = 1 ;
        }
        while(a = getchar())
        {
            if(a == 10)
                break ;
            if(a == '0' &&  first_zero == 1)
                continue ;
            result = ( last(a) + result ) % 10 ;
            first_zero = 0 ;
        }

        cout << result << endl ;
    }
    return 0 ;
}
