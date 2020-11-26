#include <stdio.h>

int main()
{
    int i, n ;
    char *hello ;
    hello = "hello" ;
    while(scanf("%d", &n) != EOF)
    {
        for(i = 1 ; i <= n ; i++)
        {
            printf("Line %d: %s\n", i, hello) ;
        }
    }
    return 0;
}
