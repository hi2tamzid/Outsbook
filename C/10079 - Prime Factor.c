#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>
#define pi acos(-1.0)


int status[2000];
void siv()
{
	int N = 1010, i, j;
	int sq=sqrt(N);

	for(i=4;i<=N;i+=2) status[i]=1;
	for(i = 3 ; i <= sq ; i += 2)
    {
		if(status[i] == 0)
		{
			for(j = i*i ; j <=N ; j += i)
                status[j]=1;
		}
	}
	status[1]=1;
}


int main()
{
    siv() ;
    long long t, n, i, k = 1 ;
    scanf("%lld", &t) ;
    while(t--)
    {
        scanf("%lld", &n) ;
        long long max = -10000, a[1010] = {0}, count = 0,d[10010] = {0},rank[10010] = {0}, j, ct ;
        for(i = 0 ; i < n ; i++)
        {
            scanf("%lld", &a[i]) ;
            max = max < a[i] ? a[i] : max ;
        }
        for(i = 2 ; i <= max ;)
        {
            if(status[i] != 0)
            {
                i++ ;
                continue ;
            }
            for(j = 0, ct = 0 ; j < n ; j++)
            {
                if(a[j] % i == 0)
                {
                    a[j]/= i ;
                    ct++ ;
                }
            }
            if(ct >= 1)
                d[i]++ ;
            else if(ct < 1)
                i++ ;
        }

        for(i = 2 ; i <= max ; i++)
            if(d[i] > 0)
        {
            rank[count] = i ;
            count++ ;
        }
        printf("Case #%lld: %lld\n", k, count) ;
        for(i = 0 ; i < count ; i++)
        {
            printf("%lld\n", rank[i]) ;
        }
        k++;
    }
    return 0;
}

