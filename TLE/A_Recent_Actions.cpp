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
    int n, m;
    cin >> n >> m;
    vector<int> ans(n, -1);
    vector<int> indexes;
    unordered_set<int> s;
    int x;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        if (s.find(x) == s.end())
        {
            indexes.push_back(i + 1);
            s.insert(x);
        }
    }

    for (int i = 0; i < min(n, (int)indexes.size()); i++)
    {
        ans[n - i - 1] = indexes[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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