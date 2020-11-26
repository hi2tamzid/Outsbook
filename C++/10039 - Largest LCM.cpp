#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long n ;
    long long t ;
    cin >> t ;
    while(t--)
    {
        cin >> n ;
        if(n == 1)
        cout << 1 << endl ;
        else
            cout << (n * (n - 1)) << endl ;
    }
    return 0 ;

}
