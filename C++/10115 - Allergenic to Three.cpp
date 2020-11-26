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

int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL n ;
    while(scanf("%lld", &n) != EOF)
    {
        LL cpy_num, di, check = 1, c = 0, loopcounting=0 ;
        for(LL i = 1 ; i <= n ; i++)
        {
            loopcounting++ ;
            cpy_num = i , check = 1;
            while(cpy_num > 0)
            {
                loopcounting++ ;
                di = cpy_num % 10 ;
                if(di == 3)
                {
                    check = 0 ;
                    break ;
                }
                cpy_num /= 10 ;
            }
            if(check == 1)
                c++ ;
        }
//        cout << "Total complexity: " << loopcounting << endl ;
        cout << c << endl ;
    }
    return 0 ;
}
