#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x = 0;
    string a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}
