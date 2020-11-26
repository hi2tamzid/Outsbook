#include <bits/stdc++.h>

using namespace std;
typedef long long LL ;
long long magic(long long l, LL r, LL a, LL b)
{
    LL total = 0;
    for(LL i = l ; i <= r ; i++)
    {
        if(i%a == 0 || i%b == 0)
            total++;
    }
    return total;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long l, r, a, b;
        cin >> l >> r >> a >> b;
        long long result = magic(l,r,a,b);
        cout << result << endl;
    }
    return 0;
}
