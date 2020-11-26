#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    int n, j = 1;
    while(scanf("%d", &n) != EOF)
    {
        int a[n], max = 0, i, sum = 0, check = 0;
        for (i = 0 ; i < n ; i++)
        {
            scanf("%d", &a[i]);
            if(max < a[i])
                max = a[i];
        }

        for (i = 0 ; i < n ; i++)
        {
            if(a[i] == max)
                {
                    if(check == 1)
                    {
                        check = 2;
                        break;
                    }
                    check = 1;
                    continue;
                }

            sum += a[i];
        }

        if((n == 2 && a[0] == a[1]) || (n == 2 && a[0] == a[1]) ||(sum <= max && check != 2))
            printf("Case %d: Monkeys got BAMBOO.\n", j);
        else
            printf("Case %d: BAMBOO got Monkeys.\n", j);
        ++j;
    }
    return 0;
}

