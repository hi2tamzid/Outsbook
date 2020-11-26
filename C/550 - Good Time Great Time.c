#include <stdio.h>

double gcd(double a, double b)
{
    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

double lcm(double a, double b)
{
    return (a*b)/gcd(a, b);
}
int main()
{
    double a, b, least, i = 1;
    int t;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%lf %lf", &a, &b);
        least = lcm(a, b);

        if(a == b && least == 1)
            printf("Case %.0lf: \"Yahoo, always we have great time in every %.0lf minute\"\n", i, least);
        else if( a != b && least == 1)
            printf("Case %.0lf: \"Yes, we have a good time after every %.0lf minutes\"\n", i, least);
        else if(a == b && least > 1)
            printf("Case %.0lf: \"Yahoo, always we have great time in every %.0lf minutes\"\n", i, least);
        else
            printf("Case %.0lf: \"Yes, we have a good time after every %.0lf minutes\"\n", i, least);
        i++;
    }
    return 0;
}
