#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, r, x, y ;
    while(cin >> x >> y)
    {
        r = (x - y) / 2;
        m = x - r;
        cout << m << " " << r << endl;
    }

    return 0;
}
