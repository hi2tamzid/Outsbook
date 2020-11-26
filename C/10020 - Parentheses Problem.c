#include <stdio.h>

long long factorial(long long n)
{
    long long i, sum = 1;
    for (i = 1 ; i <= n ; i++)
    {
        sum *= i;
    }

    return sum;
}

long long combo (int n)
{
    long long num[n+1];

    num[0] = num[1] = 1;

    long long store = 0, i;

    for (i = 2 ; i <= n ; i++)
    {
        num[i] = 0;
        int j;

        for (j = 0 ; j < i ; j++)
        {
            num[i] += num[j] * num[i-j-1];
        }
    }

    return num[n];
}
int main()
{
    int n, j = 1;
    while(scanf("%d", &n) != EOF)
    {
        printf("Case %d: %lld\n", j, combo(n));
        j++;
    }
    return 0;
}
