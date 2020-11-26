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
    LL n ;
    while(cin >> n)

    {
        vector<LL> a ;
        for(LL i = 0 ; i < n ; i++)
        {
            LL in ;
            cin >> in ;
            a.push_back(in) ;
        }
        a.erase(a.()) ;
        cout << a.back() << endl ;
//        a.clear() ;
        for(auto it = a.cbegin() ; it != a.cend() ; it++)
        {
            cout << *it << " " ;
        }
        cout << endl ;
    }
    return 0 ;
}
