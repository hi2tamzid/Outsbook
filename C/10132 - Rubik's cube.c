#include <stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld", &n) != EOF)
    {
        printf("%lld\n", n * n * 6);
    }
    return 0;
}
