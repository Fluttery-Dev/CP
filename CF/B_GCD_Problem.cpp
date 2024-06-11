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

    if (n & 1)
    {
        n /= 2;
        if (n & 1)

            cout << n - 2 << " " << n + 2 << " " << 1;
        else
            cout << n - 1 << " " << n + 1 << " " << 1;
    }
    else
    {
        int k;
        n -= 2;
        k = n / 2;
        cout << k << " " << k + 1 << " " << 1;
    }
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