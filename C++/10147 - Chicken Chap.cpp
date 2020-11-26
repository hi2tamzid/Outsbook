#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, cas = 1;
    cin >> t;
    while(t--)
    {
        int n ,q;
        cin >> n >> q;
        long long ans[n+1];
        memset(ans, 0, sizeof ans);
        for(int i = 0 ;  i < q ; i++)
        {
            int a,b;
            long long c;
            cin >> a >> b >> c;
            for(int j = a ; j <= b;  j++)
            {
                ans[j] += c;
            }
        }
        cout << "Case " << cas++ << ":";
        for(int i = 1 ; i <= n ; i++)
           cout << " " << ans[i];
           cout << endl;
    }
    return 0 ;
}
