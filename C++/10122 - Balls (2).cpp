#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
map<LL,LL> dp;
LL sol(LL x)
{
    if(dp.find(x) != dp.end())
        return dp[x];
    LL b1 = sol(x/2), b2 = sol(x/3);
    return dp[x] = (b1+b2);
}
int main()
{
    LL t, n;
    cin >> t;
    dp[1] = 1;
    dp[2] = 2;
    while(t--)
    {
        cin >> n;
        cout << sol(n) << endl;
    }
    return 0 ;
}
