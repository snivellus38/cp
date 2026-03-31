#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int ans = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ans = (ans * 2) % int(1e9 + 7);
    }
    cout << ans << "\n";
    return 0;
}