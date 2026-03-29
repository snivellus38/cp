#include <bits/stdc++.h>
using namespace std;
int main()
{
    int streak = 1, best = 1;
    string S;
    cin >> S;
    for (int i = 1; i < S.length(); i++)
    {
        if (S[i] == S[i - 1])
        {
            streak++;
        }
        else
            streak = 1;
        best = max(streak, best);
    }
    cout << best << "\n";
}
