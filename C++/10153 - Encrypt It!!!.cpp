#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    while(cin >> s)
    {
        int len = s.length();
        for(int i = 0 ; i < len ; i++)
        {
            if(isdigit(s[i]))
            {
                int v = ((int)s[i] - '0' +7) % 10;
                cout << v ;
            }
            else
            {
                int v = (int)toupper(s[i]) - 'A'+1;
                cout << (v/10) << s[i] << (v%10);
            }
        }
        cout << endl;
    }
    return 0;
}
