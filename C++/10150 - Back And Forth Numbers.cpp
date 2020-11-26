#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
        int ans;
        if((n-1)%8==0)
            ans = 1;
        else if(n%8 == 2 || n%8 == 0)
            ans = 2;
        else if((n-5)%8 == 0)
            ans = 5;
        else if(n%8 == 4 || n%8 == 6)
            ans = 4;
        else
            ans = 3;
        cout << ans << endl;
    }
    return 0;
}
