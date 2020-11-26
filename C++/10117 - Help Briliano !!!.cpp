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

int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    I t, m, n, sx, sy, ex, ey ;
    cin >> t ;
    while(t--)
    {
        cin >> m >> n ;
        I a[m+1][n+1] ;
        for(I i = 1 ; i <= m ; i++)
        {
            for(I j = 1 ; j <= n ; j++)
            {
                cin >> a[i][j] ;
            }
        }
        cin >> sx >> sy >> ex >> ey ;

        I startx = sx, starty = sy ;

        while(1)
        {
            if((startx >= 2 && starty >= 2) && (a[startx - 1][starty-1] == 1))
            {
                a[startx][starty] = 0 ;
                startx -= 1 ;
                starty -= 1 ;
            }
            else if( (startx >= 2) && (a[startx-1][starty] == 1))
            {
                a[startx][starty] = 0 ;
                startx -= 1;
            }
            else if( (startx >= 2 && starty < n) && (a[startx-1][starty+1] == 1))
            {
                a[startx][starty] = 0 ;
                startx -= 1 ;
                starty += 1 ;
            }
            else if( (starty >= 2) && (a[startx][starty-1] == 1))
            {
                a[startx][starty] = 0 ;
                --starty ;
            }
            else if( (starty < n) && (a[startx][starty+1] == 1))
            {
                a[startx][starty] = 0 ;
                starty++ ;
            }
            else if( (startx < m && starty >= 2) && (a[startx+1][starty-1] == 1))
            {
                a[startx][starty] = 0 ;
                startx++ ;
                starty-- ;
            }
            else if( (startx < m) && (a[startx+1][starty] == 1))
            {
                a[startx][starty] = 0 ;
                startx++ ;
            }
            else if( (startx < m && starty < n) && (a[startx+1][starty+1] == 1))
            {
                a[startx][starty] = 0 ;
                startx++ ;
                starty++ ;
            }
            else
            {
                break ;
            }
        }

        if(startx == ex && starty == ey)
            cout << "YES" << endl ;
        else
            cout << "NO" << endl ;
    }
    return 0 ;
}
