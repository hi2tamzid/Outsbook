#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, a[30] = {0}, total = 0;
        cin >> n >> m;
        char aa;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                cin >> aa;
                a[toupper(aa)- 'A']++;
                total++;
            }
        }
        int l;
        cin >> l;
        bool ans = false;
        int value ;
        int intfre[l];
        for(int i = 0 ; i < l ; i++)
        {
            cin >> aa;
            intfre[i] = a[toupper(aa) - 'A'];
        }
        for(int i = 0   ; i < l ; i++)
        {
            if(l <= intfre[i])
            {
                total = total - l;
                intfre[i] -= l;
            }
            else
                total = total - intfre[i];

            value = floor(sqrt(total));

        }
//        int value = sqrt(total);
        if(value * value == total)
            cout << value << endl;
        else
            cout << "Impossible!!" << endl;
    }
    return 0;
}
