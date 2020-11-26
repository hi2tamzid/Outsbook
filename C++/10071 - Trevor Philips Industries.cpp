#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long m, t, n;
        cin >> m>> t >> n;
        double result = (double)n / (m * 4.0) ;
        result = ceil(result) * (double)t;
        cout <<fixed << setprecision(0) << result << endl;
    }
    return 0;
}
