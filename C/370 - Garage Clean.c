#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int main()
{
    double m, n, result, j = 1;
    while(scanf("%lf %lf %lf", &m, &n, &result) != EOF && m != 0 && n != 0)
    {
        double unit, unit_of_big, bigshot;

        unit = result / (m + n);
        if(m > n)
        {
            unit_of_big = unit * m;
            bigshot = (m - n) * unit;
            m = unit_of_big + bigshot;
            n = result - m;
            printf("Case %.0lf: %.0lftaka %.0lftaka\n", j, m, n);
        }
        else
        {
            unit_of_big = unit * n;
            bigshot = (n - m) * unit;
            n = unit_of_big + bigshot;
            m = result - n;
            printf("Case %.0lf: %.0lftaka %.0lftaka\n", j, n, m);
        }

        ++j;
    }
    return 0;
}
