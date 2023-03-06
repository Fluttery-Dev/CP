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
    vector<int> nums;
    vector<int> req(n);
    iota(req.begin(), req.end(), 1);
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t <= n && req[t - 1] != -1)
        {
            req[t - 1] = -1;
        }
        else
            nums.push_back(t);
    }

    sort(nums.begin(), nums.end());

    int count = 0;

    for (int i = 0, j = 0; i < req.size(); i++)
    {
        if (req[i] == -1)
            continue;
        if (req[i] >= (nums[j] + 1) / 2)
        {
            cout << -1;
            return;
        }
        count++;
        j++;
    }

    cout << count;
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