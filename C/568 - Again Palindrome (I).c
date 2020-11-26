#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int k = 1;
    char s[1001];
    while(scanf("%s", s) != EOF)
    {
        int i, length, check[27] = {0}, result = 1,num;
        length = strlen(s);


            for (i = 0 ; i < length ; i++)
            {
                num = s[i] - 97;
                check[num]++;
            }
            if(check[num] == length)
                printf("Case #%d: Yes\n", k);
            else
            {
                 int excess = 0;
            for (i = 0 ; i < 26 ; i++)
            {
                if(check[i] == 0)
                    continue;
                if( check[i] % 2 == 1 && excess == 0)
                {

                    excess = 1;
                }
                else if (check[i] % 2 == 1)
                {
                    result = 0;
                    break;
                }
            }

            if(result == 0)
                printf("Case #%d: No\n", k);
            else
                printf("Case #%d: Yes\n", k);
            }

        k++;
    }
    return 0;
}
