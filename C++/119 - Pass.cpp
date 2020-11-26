#include <iostream>

using namespace std;
class pass
{
public:
    pass(int x, int y)
    {
        cout <<(((x - y) * 100) / x) << "%" << endl ;
    }
};
int main()
{
    int x, y ;
    cin >> x >> y ;
    pass a(x, y) ;
    return 0 ;
}
