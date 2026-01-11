// 2181H - Honey Cake
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long w, h, d;
    cin >> w >> h >> d;
    long long n;
    cin >> n;
    long long a = __gcd(n, w);
    n /= a;
    long long b = __gcd(n, h);
    n /= b;
    long long c = __gcd(n, d);
    n /= c;
    if (n != 1)
    {
        cout << -1;
        return 0;
    }
    cout<<a-1<<" "<<b-1<<" "<<c-1;
    return 0;
}