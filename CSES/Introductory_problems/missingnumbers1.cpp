#include <bits/stdc++.h>
using namespace std;
long long N, X, S, Y, L;
int main()
{
    scanf("%lld", &N);
    for (int i = 0; i < N - 1; i++)
    {
        scanf("%lld", &X);
        S += X;
    }
    L = N * (N + 1) / 2;
    Y = L - S;
    printf("%lld", Y);
}