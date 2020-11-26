#include <iostream>

using namespace std ;

void input() ;
template <typename t1, typename t2> void output(t1 a, t2 b) ;
int main()
{
    input() ;
    return 0 ;
}

void input()
{
    int x ;
    cin >> x ;
    output(x, 365) ;
}
template <typename t1, typename t2> void output(t1 a, t2 b)
{
    cout << a * b << endl ;
}
