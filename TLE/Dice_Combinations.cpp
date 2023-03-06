#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

unordered_map<int, int> mp;

int ans(int n)
{
    if (mp.find(n) == mp.end())
    {
        int t = 0;
        for (int i = 1; i <= 6 && i <= n; i++)
        {
            t += ans(n - i);
            t %= MOD;
        }

        mp[n] = t;
    }

    return mp[n];
}

void solve()
{
    mp[0] = 1;
    mp[1] = 1;
    int n;
    cin >> n;
    cout << ans(n);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}