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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> nums(n);
    // unordered_map<int, int> pos;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(all(nums));

    int i = 0;
    int countR = 0;

    for (int i = 0; i < n; i++)
    {
        int j = (upper_bound(all(nums), r - nums[i]) - nums.begin()) - 1;
        if (j <= i)
            break;
        countR += (j - i);
    }
    int countL = 0;
    for (int i = 0; i < n; i++)
    {
        int j = (upper_bound(all(nums), l - nums[i] - 1) - nums.begin()) - 1;
        if (j <= i)
            break;
        countL += (j - i);
    }
    cout << countR - countL;
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