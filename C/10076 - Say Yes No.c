#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)
int main()
{
    char a[200], b[210] ;
    int t ;
    scanf("%d", &t) ;
    while(t--)
    {
        scanf("%s", a) ;

        int i, j ;
        strcpy(b, "") ;
        for(i = 0, j = 0 ; i < strlen(a) ; i++)
        {

            b[j++] = a[i] ;
            b[j] = '\0' ;

            if(a[i] == ')')
            {
                if(b[j-2] == '(')
                {
                    b[j-2] = '\0' ;
                    j-=2 ;
                }

            }
            else if(a[i] == ']')
            {

                if(b[j-2] == '[')
                {
                    b[j-2] = '\0' ;
                    j-=2 ;
                }
            }
        }
        if(strlen(b) == 0)
            printf("Yes\n") ;
        else
            printf("No\n") ;
    }
    return 0;
}
