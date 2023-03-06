#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    int min, max;

    if (n & 1 || n < 4)
    {
        cout << -1;
        return;
    }

    n /= 2;

    max = n / 2;

    min = (n + 2) / 3;

    cout << min << " " << max;
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