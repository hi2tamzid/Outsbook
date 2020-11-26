#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
        if(!(n&1))
            cout << n << endl;
        else
            cout << (n-1) << endl;
    }
    return 0;
}
