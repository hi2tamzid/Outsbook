#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#define test 0
#define pi acos(-1.0)
using namespace std ;

typedef long L ;
typedef long long LL ;
typedef unsigned long long ULL ;
typedef bool B ;

int main()
{
#if test
    ifstream input("input.txt") ;
    ofstream output("output.txt") ;
#endif
    LL t, k = 1 ;
    cin >> t ;
    while(t--)
    {
        LL n ;
        cin >> n ;
        LL a, last , i;
        vector<LL> ar ;
        B check  = false ;
        for(LL i = 0 ; i < n ; i++)
        {
            cin >> a ;
            ar.push_back(a) ;
        }
        cin >> last ;
        vector<LL>::iterator it ;
        LL pos  = 1;
        for(it = ar.begin() ; it < ar.end() ; it++, pos++)
        {
            if(*it == last)
            {
                check = true ;
                break ;
            }
        }
        if(check)
            cout << "Case " << k++ << ": " << pos << endl ;
        else
            cout << "Case " << k++ << ": Not Found" << endl ;
    }
    return 0 ;
}
