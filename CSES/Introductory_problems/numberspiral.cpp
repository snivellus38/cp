#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll x, y;
    cin >> y >> x;
    ll s = max(x, y) - 1;
    if (s & 1)
    {
        if (x < y)
        {
            cout << s * s + 2 * s + 1 - x + 1 << "\n";
        }
        else
        {
            cout << s * s + y << "\n";
        }
    }
    else
    {
        if (x < y)
        {
            cout << s * s + x << "\n";
        }
        else
        {
            cout << s * s + 2 * s + 1 - y + 1 << "\n";
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}