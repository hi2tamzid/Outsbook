#include <iostream>
#include <cmath>


using namespace std;

long long int power(long long int , long long int );
int main()
{
    int n, i = 0,store = 0, last;
    cin >> n;
    while(n != 0)
    {
        last = n % 10;
        store = store + last * power(2, i);
        n /= 10;
        i++;
    }

    cout << store << endl;
    return 0;
}

long long int power(long long int a, long long int b)
{
    long long int store = 1;

    for (int i = 0 ; i < b ; i++)
    {
        store *= a;

    }
    return store;

}
