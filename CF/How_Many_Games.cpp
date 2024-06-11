#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    double n;
    cin >> n;

    double k = n;
    while (n != (int)n)
        n *= 10;

    int p = n;
    for (int i = 2; i * i <= p && p > k; i++)
    {
        while (p % i == 0 && p / i >= k)
            p /= i;
    }

    cout << ceil(p / k);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}