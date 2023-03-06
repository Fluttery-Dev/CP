#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{

    int n, m, x;
    cin >> n >> x >> m;

    int start = x, end = x;

    int arr[n + 1];

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;

        if ((start >= l && start <= r) || (end >= l && end <= r))
        {
            start = min(start, l);
            end = max(end, r);
        }
    }

    cout << end - start + 1;
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