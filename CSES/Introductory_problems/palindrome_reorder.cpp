#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int counts[26] = {0};
    for (int i = 0; i < (int)s.size(); i++)
    {
        counts[s[i] - 'A']++;
    }
    int odd_char = 0;
    string middle_char = "";
    for (int i = 0; i < 26; i++)
    {
        if (counts[i] % 2)
        {
            odd_char++;
            middle_char = char(i + 'A');
        }
    }
    if (odd_char > 1)
    {
        cout << "NO SOLUTION" << "\n";
    }
    else
    {
        string left_side = " ";
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= counts[i] / 2; j++)
            {
                left_side += char(i + 'A');
            }
        }
        string right_side = left_side;
        reverse(right_side.begin(), right_side.end());
        cout << left_side;
        if (odd_char == 1)
        {
            cout << middle_char;
        }
        cout << right_side << "\n";
    }
}

/*
Hello
123 32 34 34 45 0
*/