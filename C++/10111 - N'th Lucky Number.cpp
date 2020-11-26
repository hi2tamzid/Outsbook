#include <bits/stdc++.h>

using namespace std ;

 long long lucky[60010] ;

long long power(long long a, long long b)
{
    long long result = 1 ;
    for (long long i = 1 ; i <= b ; i++)
    {
        result *= a ;
    }
    return result ;

}
void lucky_number()
{
    long long count = 1, num = 7 ;

    for(long long i = 1; count <= 60002 ; i++)
    {
        if(i == 1)
            lucky[count++] = 1 ;
        else if(i == 2)
            lucky[count++] = num ;
        else
            {
                num *= 7 ;
                lucky[count++] = num;
            }
//            cout << "lucky[" << count - 1 << "] = " << lucky[count - 1] << endl ;
        long long store = count - 1 ;
        for(long long j = 1 ; j < store && count <= 60002 ; j++)
        {
            lucky[count++] = lucky[store] + lucky[j] ;
//            cout << "lucky[" << count - 1 << "] = " << lucky[count - 1] << endl ;
        }
    }
}
int main()
{
    lucky_number() ;
    long long t, k = 1  ;
    cin >> t ;
    while(t--)
    {
        long long n ;
        cin >> n ;
        cout << "Case " << k++ << ": " << lucky[n] << endl ;

    }
    return 0 ;
}
