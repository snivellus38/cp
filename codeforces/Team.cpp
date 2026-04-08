#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    int total_solved = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (a + b + c >= 2)
        {
            total_solved++;
        }
    }
    cout << total_solved << "\n";
}
