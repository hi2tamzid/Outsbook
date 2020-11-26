#include <stdio.h>
#include <string.h>

int value_conversion(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

int main()
{
    char a[25];
    int t, j = 1;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", a);
        int length = strlen(a), sum = 0;
        int i;
        for (i = 0; i < length ; i++)
        {
            int s1 = value_conversion(a[i]);

            if (i+1 < length)
            {
                int s2 = value_conversion(a[i+1]);

                if (s1 >= s2)
                {
                    sum = sum + s1;
                }
                else
                {
                    sum = sum + s2 - s1;
                    i++;
                }
            }
            else
            {
                sum = sum + s1;
                i++;
            }
        }
        printf("Case %d: %d\n", j, sum);
        ++j;
    }
    return 0;
}
