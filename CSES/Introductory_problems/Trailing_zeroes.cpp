#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long N;
    long long d;
    cin >> N;
    long long c = 0;
    // cout << c << endl;
    for (int i = 1; i <= N; i++)
    {
        d = N / (pow(5, i));
        if (d > 0)
        {
            c += d;
        }
        else
            break;
    }
    cout << c << "\n";
}

/*

    int i = 1;
    while(pow(5, i) < N){

        C += N / pow(5, i);
        i++;
    }

    cout << C << endl;

    1 2 break;

    1 2 break;


*/