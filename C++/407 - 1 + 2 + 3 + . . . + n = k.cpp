#include <bits/stdc++.h>

using namespace std ;

int main()
{
    double k ;
    while(cin >> k)
    {
        double result ;
        result = (-1+sqrt(1+8*k)) / 2 ;
        cout << fixed << setprecision(0) << result << endl ;
    }
    return 0 ;
}
