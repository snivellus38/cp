#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long total_sum = n * (n + 1) / 2;
    long long target = total_sum / 2;
    if (total_sum & 1)
    {
        cout << "NO" << "\n";
        return 0;
    }
    cout << "YES\n"
         << "\n";
    vector<int> v1, v2;
    for (int i = n; i >= 1; i--)
    {
        if (i <= target)
        {
            v1.push_back(i);
            target -= i;
        }
        else
        {
            v2.push_back(i);
        }
    }
    cout << v1.size() << "\n";
    for (int x : v1)
        cout << x << " ";
    cout << v2.size() << "\n";
    for (int x : v2)
        cout << x << " ";
    return 0;
}