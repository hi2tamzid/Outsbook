#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n = (n % 10) * 1 + (n/10 % 10) * 2 + (n/100 % 10) * 4 + (n/1000 % 10) * 8 + (n/10000) * 16;
    printf("%d\n", n);
    return 0;
}
