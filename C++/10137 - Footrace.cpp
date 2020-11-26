#include <bits/stdc++.h>
#define ABS(x) (((x) > 0) ? (x) : (-(x)))
using namespace std ;

int main()
{
    int n ;
    cin >> n ;
    long long milton = 0, porag = 0 ;

    for(int i = 1 ; i <= n ; i++)
    {
        int p, q ;
        cin >> p >> q ;
        milton += q ;
        porag += p ;
        int result = ABS(milton - porag) ;
        if(milton > porag)
        {
            printf("Measurement %d: M ahead by %d\n", i, result) ;
        }
        else if(milton < porag)
            printf("Measurement %d: P ahead by %d\n", i, result) ;
        else
            printf("Measurement %d: Even\n", i) ;
    }
    return 0 ;
}
