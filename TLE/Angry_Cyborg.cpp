#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, q, b, l, r;
    cin >> n >> q;
    vector<int> v(n + 2, 0), a(n + 2, 0);
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        v[l]++;
        v[r + 1] -= 1;
        a[r + 1] -= (r - l + 1);
    }
    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] += a[i - 1] + v[i];
        cout << a[i] << " ";
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