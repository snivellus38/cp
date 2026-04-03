#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total_lines = (1 << n);
    for (int i = 0; i < total_lines; i++)
    {
        int gray_code = i ^ (i >> 1);
        for (int j = n - 1; j >= 0; j--)
        {
            cout << ((gray_code >> j) & 1);
        }
        cout << "\n";
    }
    return 0;
}