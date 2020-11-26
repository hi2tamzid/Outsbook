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

LL box[100000] ;

void gen_balls()
{
    box[0] = 1;
    box[1] = 2 ;
    for(LL i = 3 ; i < 100 ; i++)
    {
        box[i-1] = box[i/2-1] + box[i/3-1] ;
//        cout << i  << " = " << box[i - 1] << endl ;
    }
}
int main()
{
    gen_balls() ;
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL t , n ;
    cin >> t  ;
    while(t--)
    {
        cin >> n ;
        cout << box[n-1] << endl ;
    }
    return 0 ;
}
