#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y;
    while(cin >>x >> y)
    {
        int diff;
        if(x > y)
        {
            diff = 30 - x + y;
        }
        else
            diff = y - x;
        if(diff == 0)
            printf("New Moon\n");
        else if( diff > 0 && diff < 7)
            printf("Waxing Moon\n");
        else if(diff == 7)
            printf("Waning Moon\n");
        else if(diff > 7 && diff < 14)
            printf("Gibbous Moon\n");
        else if(diff == 14)
            printf("Full Moon\n");
        else if(diff > 14 && diff < 22)
            printf("Gibbous Moon\n");
        else if(diff == 22)
            printf("Waning Moon\n");
        else if(diff > 22 && diff < 29)
            printf("Waxing Moon\n");
        else if(diff == 29)
            printf("New Moon\n");
    }
    return 0;
}
