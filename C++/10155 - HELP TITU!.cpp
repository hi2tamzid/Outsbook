#include <bits/stdc++.h>

using namespace std;

typedef long long LL;
int main()
{
    LL t;
    cin >> t;
    while(t--)
    {
        LL n, k;
        cin >> n >> k;
        LL result = 0;
        for(int i = 1 ; i <= n ; i++)
        {
            LL a, b;

            cin >> a >> b;
            if( k >= a)
            {
                k -= a;
                a = 0;
            }
            else
            {
                a-= k;
                k = 0;
            }
            result += (a * b);
        }
        cout << result << endl;
    }
    return 0;
}
