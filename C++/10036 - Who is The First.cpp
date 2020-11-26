#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, cas = 1;
    cin >> t;
    double a[5], total_credit = 0.0;
    for(int i = 0 ; i < 5 ; i++)
        {
            cin >> a[i];
            total_credit += a[i];
        }
//        cout << total_credit << endl;;
    while(t--)
    {
        int n;
        cin >> n;
        double b[5], sefu_cgpa = 0.0;
        bool result = true;
        for(int i = 0 ; i < 5 ;i++)
        {
            cin >> b[i];
            sefu_cgpa += (b[i] * a[i]);
        }

        sefu_cgpa /= total_credit;
//        cout << sefu_cgpa << endl;
        for(int i = 0 ; i < n-1 ; i++)
        {
            double std_cgpa = 0.0;
            for(int j = 0 ; j < 5 ; j++)
            {
                cin >> b[j];
                std_cgpa += (b[j] * a[j]);
            }
            std_cgpa /= total_credit;
            if(std_cgpa >= sefu_cgpa)
                {
                    result = false;
                }
        }
        if(result)
            printf("Case #%d: Yahoo!\n", cas);
        else
            printf("Case #%d: Oops!\n", cas);
        cas++;

    }
    return 0;
}
