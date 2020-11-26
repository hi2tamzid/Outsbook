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

void multi(C a[], C b[]) ;
void division(C a[], C b[]) ;
LL stringcompare(C a[], C b[]) ;
void subtraction(C a[], C b[]) ;
void addition(C a[], C b[]) ;

int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    C a[10100], b[10] = "55" ;
    while(cin >> a)
    {
        C quotient[1010] = {}, multiplication[1010] = {}, copy_a[1010] = {}, copy_a_again[1010] = {} ;
        C copy_b[10] = "55" ;
        strcpy(b, "55") ;
        strcpy(copy_a, a) ;
        strcpy(copy_a_again, a) ;
        division(a, b) ;
        multi(a, copy_b) ;
        subtraction(copy_a, a) ;
        if(strcmp(copy_a, "0") == 0)
            cout << copy_a_again << " is divisible by 55" << endl ;
        else
            cout << copy_a_again << " is not divisible by 55" << endl ;
            strcpy(a, "") ;
    }

    return 0 ;
}

void multi(C a[], C b[])
{
    C multi[10100] = {} ;
    LL len1 = strlen(a), len2 = strlen(b), r, a1, b1, k = 0, z = 0, i, j;
    LL rem = 0, max = -4, len ;
    for(i = len2 - 1 ; i >= 0 ; i--)
    {
        rem = 0 ;
        k = z ;
        z++ ;
        for(j = len1 - 1 ; j >= 0 ; j--)
        {
            if(i >= 0 && isdigit(b[i]))
                b1 = b[i] - '0' ;
            else
                b1 = b1 = 0 ;

            if(j >= 0 && isdigit(a[j]))
                a1 = a[j] - '0' ;
            else
                a1 = 0 ;

            if(isdigit(multi[k]))
                rem += (multi[k] - '0') ;

            r = (a1 * b1) + rem ;

            multi[k++] = (r % 10) + '0' ;
            rem = r / 10 ;
        }

        while(rem > 0)
        {
            multi[k++] = (rem % 10) + '0' ;
            rem /= 10 ;
        }

        multi[k] = '\0' ;
        len = strlen(multi) ;
        max = max > len ? max : len ;
    }
    while(max > 1 && multi[max-1] == '0')
        max-- ;
    multi[max] = '\0' ;
    len = strlen(multi) ;

    for(i = 0 ; i< len ; i++)
    {
        a[i] = multi[len-i-1] ;
    }
    a[i] = '\0' ;
}

void division(C a[], C b[])
{
    C copy_a[10100] = {} , copy_b[10100] = {} , dividend[10100] = {} , multiplier[10100] = {}, copy_multiplier[10100] = {} ;
    C quotient[10100] = {}, copy_copy_b[10100] = {} ;
    LL len1 = strlen(a), len2 = strlen(b), i = 0, k = 0 ;
    strcpy(copy_a, a) ;
    strcpy(copy_b, b) ;
    if(stringcompare(a, b) < 0)
    {
        strcpy(a, "0") ;
        strcpy(b, copy_a) ;
        return ;
    }

    while(i < len1)
    {

        dividend[k++] = copy_a[i++] ;
        dividend[k] = '\0' ;
        strcpy(multiplier, "0") ;
        strcpy(copy_b, "0") ;
        do
        {
            strcpy(copy_copy_b, copy_b) ;
            strcpy(copy_multiplier, multiplier) ;
            addition(copy_b, b) ;
            C vul[2] = "1" ;
            addition(multiplier, vul) ;
        }while(stringcompare(dividend, copy_b) >= 0) ;
        subtraction(dividend, copy_copy_b) ;
        k = strlen(dividend) ;
        if(strcmp(dividend, "0") == 0)
            k-- ;
        strcpy(copy_b, b) ;
        strcat(quotient, copy_multiplier) ;
    }
    LL len = strlen(quotient), j = 0 ;
    i = 0 ;
    while(i < len && quotient[i] == '0')
        i++ ;
    while(i < len)
        a[j++] = quotient[i++] ;
    a[j] = '\0' ;
    if(strcmp(a, "\0") == 0)
        strcpy(a, "0") ;
    strcpy(b, dividend) ;
}

LL stringcompare(C a[], C b[])
{
    LL len1 = strlen(a), len2 = strlen(b), f = 0 ;
    LL i , j;
    if(len1 > len2)
            {
                f = 1 ;
            }
    else if(len1 < len2)
        f = -1 ;
    else
    {
        for(i = 0 ; i < len1 ; i++)
        {
            if(a[i] > b[i])
                {
                    f = 1 ;
                    break ;
                }
            else if(a[i] < b[i])
                {
                    f = -1 ;
                    break ;
                }
        }

    }
    return f ;
}


void subtraction(C a[], C b[])
{
    LL i, j, len1 = strlen(a), len2 = strlen(b), math, max, k = 0, a1, b1, len,b2 = 0, diff ;
    max = len1 > len2 ? len1 : len2 ;
    C s[10100] = {}, copy_b[10100] = {}, temp[10100] = {},copy_c[10100] = {} ;
    strcpy(copy_c, b) ;
    i = len1 - 1 ;
    j = len2 - 1 ;
    diff = i - j ;
    if(diff > 0)
    {
        LL o, p ;
        for(o = 0 ; o < diff ; o++)
            copy_b[o] = '0' ;
        for(p = 0 ; p < len2 ; o++, p++)
            copy_b[o] = b[p] ;
        copy_b[o] = '\0' ;
        strcpy(b, copy_b) ;
        j = strlen(b) - 1 ;
    }
    if(stringcompare(a, b) < 0)
    {
        strcpy(temp, a) ;
        strcpy(a, b) ;
        strcpy(b, temp) ;

        LL te = i ;
        i = j ;
        j = te ;
        diff = i - j ;
    if(diff > 0)
    {
        LL o, p ;
        for(o = 0 ; o < diff ; o++)
            copy_b[o] = '0' ;
        for(p = 0 ; p <= j ; o++, p++)
            copy_b[o] = b[p] ;
        copy_b[o] = '\0' ;
        strcpy(b, copy_b) ;
        j = strlen(b) - 1 ;
    }
    }
    while(max--)
    {
        if(i >= 0 && isdigit(a[i]))
            a1 = a[i] - '0' ;
        else
            a1 = 0 ;
        if(j >= 0 && isdigit(b[j]))
            b1 = b[j] - '0' ;
        else
            b1 = 0 ;
        i--, j-- ;
        math = a1 - b1 ;
        if(math < 0)
        {
            a1 = 10 + a1 ;
            math = a1 - b1 ;

                b1 = 1 + (b[j] - '0') ;
            b[j] = (b1 % 10) + '0' ;
            b1 /= 10 ;
            LL lol = j - 1 ;
            while(b1 > 0)
            {

                b1 += (b[lol] - '0') ;
                b[lol--] = (b1 % 10) + '0' ;

                b1 /= 10 ;
            }
        }
        s[k++] = math + '0' ;
    }
    while( k > 1 && s[k-1] == '0')
        k-- ;
    s[k] = '\0' ;

    len = strlen(s) ;
    for(i = 0 ; i < len ; i++)
        a[i] = s[len-i-1] ;
    a[i] = '\0' ;
    strcpy(b, copy_c) ;
}

void addition(C a[], C b[])
{
    LL len1 = strlen(a), len2 = strlen(b), i, j, k, a1, b1, max, math, len, rem = 0 ;
    C add[10100] = {} ;
    i = len1 - 1 ;
    j = len2 - 1 ;
    k = 0 ;
    max = len1 > len2 ? len1 : len2 ;
    while(max--)
    {
        if(i >= 0 && isdigit(a[i]))
            a1 = a[i] - '0' ;
        else
            a1 = 0 ;
        if(j >= 0 && isdigit(b[j]))
            b1 = b[j] - '0' ;
        else
            b1 = 0 ;
        i--, j-- ;
        math = a1 + b1 + rem;

        add[k++] = (math % 10) + '0' ;
        rem = math / 10 ;
    }
    while(rem > 0)
    {
        add[k++] = (rem % 10) + '0' ;
        rem /= 10 ;
    }
    while(k > 1 && add[k-1] == '0')
        k-- ;
    add[k] = '\0' ;
    len = strlen(add) ;
    for(i = 0 ; i < len ; i++)
    {
        a[i] = add[len-i-1] ;
    }
    a[i] = '\0' ;
}
