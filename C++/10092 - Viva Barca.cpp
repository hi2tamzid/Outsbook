#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <vector>
#include <map>
#include <stdexcept>
#include <exception>
#include <fstream>

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
        I n, curr, a = 0, b ;
        C co ;
        cin >> n >> curr;
        b = curr ;
        for(LL i = 0 ; i < n ; i++)
        {
            cin >> co ;
            if(co == 'P' || co == 'p')
            {
                cin >> curr ;
                a = b ;
                b = curr ;
            }
            else if(co == 'B' || co == 'b')
            {
                I temp ;
                temp = a ;
                a = b ;
                b = temp ;
            }

        }

        cout << "Player " <<  b << endl ;

    }
    return 0 ;
}
