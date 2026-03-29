#include <bits/stdc++.h>
using namespace std;
long long N, Y, Xum;
int main()
{
    scanf("%lld", &N);
    for (int i = 0; i <= N; i++)
    {
        Xum ^= i;
    }
    for (int i = 0; i < N - 1; i++)
    {
        scanf("%lld", &Y);
        Xum ^= Y;
    }
    printf("%lld", Xum);
}