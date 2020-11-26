#include <stdio.h>

int main()
{
    double n, result;
    while(scanf("%lf", &n)!= EOF && n >= 3)
    {
        result = ((2 * n * n * n) - (9 * n * n) + (10 * n)) / 24;
        printf("%.0lf\n", result);
    }
    return 0;
}
