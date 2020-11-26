#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)

void decimaltobinary(long long s, char a[])
{
    long long i = 0, di ;
    while(s > 0)
    {
        di = s % 2 ;
        s /= 2 ;
        a[i] =  di + '0' ;
        i++ ;
    }
    a[i] = '\0' ;
}

long long strtoint(char a[])
{
    long long i, len = strlen(a), digit = 0, base = 1;
    for(i = 1 ; i < len ; i++)
    {
        base *= 10 ;
    }
    for(i = 0 ; i < len ; i++)
    {
        digit = digit + (a[i] - '0') * base ;
        base /= 10 ;
    }
    return digit ;
}
int main()
{
    long long k = 1 ;
    char n[100] ;
    while(scanf("%s", &n) != EOF)
    {
        long long len = strlen(n), i, j, chk = 1, decimal ;
        for(i = 0, j = len - 1 ; i < len / 2 ; i++, j--)
        {
            if(n[i] != n[j])
            {
                chk = 0 ;
                break ;
            }
        }
        if(chk == 1)
        {
            chk = 2 ;
            decimal = strtoint(n) ;
            strcpy(n, "") ;
            decimaltobinary(decimal, n) ;
            len = strlen(n) ;
            for(i = 0, j = len - 1 ; i < len / 2; i++, j--)
            {
                if(n[i] != n[j])
                {
                    chk = 1 ;
                    break ;
                }
            }
        }
        if(chk == 2)
            printf("Case %lld#\nSuper Palindromic Number.\n", k) ;
        else if(chk == 1)
            printf("Case %lld#\nPalindromic Number.\n", k) ;
        else
            printf("Case %lld#\nNot Palindromic Number.\n", k) ;
        k++ ;
    }
    return 0;
}

