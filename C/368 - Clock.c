#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    int n, j = 1 ;
    while(scanf("%d", &n) != EOF)
    {
        if(n % 6 == 0)
            printf("Case %d: Y\n", j) ;
        else
            printf("Case %d: N\n", j) ;
        j++ ;
    }
    return 0;
}
