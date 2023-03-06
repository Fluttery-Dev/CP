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

    string str;
    cin >> str;
    vector<int> zeros;

    if (n == 1)
    {
        cout << 0;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
        {
            zeros.push_back(i);
        }
    }
    int ans = 0;

    for (int i = 1; i < zeros.size(); i++)
    {
        int t = zeros[i] - zeros[i - 1] - 1;
        if (t <= 1)
            ans += 2 - t;
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