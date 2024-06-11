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
    unordered_set<int> s;
    vector<int> nums(n, 0);
    unordered_set<int> index;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];

        s.insert(nums[i]);
    }
    int x, y;
    vector<int> temp(m + 1, 0);
    for (int i = 1; i < m + 1; i++)
    {
        cin >> x >> y;
        nums[x - 1] = y;
        if (s.find(y) == s.end() && index.find(x) == index.end())
        {
            temp[i] = 1;
            s.insert(y);
            index.insert(x);
        }   
        s.erase(nums[x - 1]);
    }

    vector<int> preq(m + 1);
    partial_sum(all(temp), preq.begin());

    int ans = 0;
    for (int i = 0; i < m + 1; i++)
    {
        ans += (m - i) * (n + preq[m - i] - preq[i]);
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