#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
int main()
{
    LL r, c;
    while(cin >> r >> c)
    {
        LL result;
        if(c == 0)
            result = ((r * (r+1)) / 2) + (r+1);
        else
        {
            LL combo = r + c;
            result = ((combo * (combo + 1)) / 2) + (r+1);
        }
        cout << result << endl;
    }
    return 0;
}
