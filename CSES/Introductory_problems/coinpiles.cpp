#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, t = 0;
    cin >> t;

    while (t--)
    {
        cin >> a >> b;

        d = max(a, b);
        c = min(a, b);

        if ((d > 2 * c) || ((2 * c - d) % 3))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}