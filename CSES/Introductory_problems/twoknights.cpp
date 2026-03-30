#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N = 0, k = 0;
    cin >> N;
    for (k = 1; k <= N; k++)
    {
        cout << ((k * k) * (k + 1) * (k - 1) / 2) - (4 * (k - 2) * (k - 1)) << "\n";
    }
    return 0;
}