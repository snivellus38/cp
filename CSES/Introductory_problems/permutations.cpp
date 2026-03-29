#include <bits/stdc++.h>
using namespace std;
long long N;
int main()
{
    cin >> N;
    if (N == 2 || N == 3)
    {
        cout << "NO SOLUTION\n ";
        return 0;
    }
    for (int i = 2; i <= N; i += 2)
    {
        cout << i << " ";
    }
    for (int i = 1; i <= N; i += 2)
    {
        cout << i << " ";
    }
    cout << "\n";
}