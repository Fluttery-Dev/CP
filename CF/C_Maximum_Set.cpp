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
    int l, r;
    cin >> l >> r;

    int t = l;
    int count = log2(r / l) + 1;

    int ans = 0;

    for (int i = 2; true; i++)
    {
        int x = r / pow(i, count - 1);
        cout << i << " " << x << endl;
        if (x < l)
            break;

        ans += x - l + 1;
    }

    cout << count << " " << ans;
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