#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int len = s.length();
        long long   baba = 0, maa = 0;
        for(int i = 0 ; i < len ; i++)
            s[i] = tolower(s[i]);
        for(int i = 0 ; i < len-2 ; i++)
        {
            if(s[i] == 'b' && s[i+1] == 'a' && s[i+2] == 'b' && s[i+3] =='a')
                {
                    i = i + 3;
                    baba++;
                }
        }
        for(int i = 0 ; i < len - 1; i++)
        {
            if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'a')
                {
                    i = i+2;
                    maa++;
                }
        }
        printf("BABA = %lld , MAA = %lld\n", baba, maa);
    }
    return 0;
}
