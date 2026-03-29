#include <bits/stdc++.h>
using namespace std;
long long N;
int main()
{
    int x = 0, mx = 0;
    long long ans = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        mx = max(x, mx);
        ans += (mx - x);
    }
    cout << ans << "\n";
}