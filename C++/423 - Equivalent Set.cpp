#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int a1, b1, c1, a2, b2, c2 ;
    while(cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2)
    {
        if((a1 == a2 || a1 == b2 || a1 == c2) && (b1 == a2 || b1 == b2 || b1 == c2) && (c1 == a2 || c1 == b2 || c1 == c2))
            cout << "A = B" << endl ;
        else
            cout << "A != B" << endl ;
    }
    return 0 ;
}
