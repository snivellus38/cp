#include <bits/stdc++.h>
using namespace std;
int last_open;
void solve()
{
    long long int total_score = 0;
    long long int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> open_positions;
    for (int i = 0; i < n; i++)
    {

        if (s[i] == '(')
        {
            open_positions.push_back(i);
        }
        else
        {
            if (s[i] == ')')
            {
                last_open = open_positions.back();
                open_positions.pop_back();
                total_score += (i - last_open);
            }
            else
            {
                if (s[i] == '_')
                {
                    if (open_positions.empty())
                    {
                        open_positions.push_back(i);
                    }
                    else
                    {
                        last_open = open_positions.back();
                        open_positions.pop_back();
                        total_score += (i - last_open);
                    }
                }
            }
        }
    }
    cout << total_score << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}