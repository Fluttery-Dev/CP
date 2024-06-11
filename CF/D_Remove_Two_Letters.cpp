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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int a = str[0];
    int b = str[1];
    int c, d;

    int ans = 1;

    for (int i = 1; i < n - 1; i++)
    {
        c = str[i];
        d = str[i + 1];
        // cout << a << b << " " << c << d << endl;
        if (!((a == c && b == d) || (a == d && b == c)))
            ans++;
        a = c;
        b = d;
    }

    cout << ans;
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