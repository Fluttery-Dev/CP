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

    vector<int> nums(n);
    vector<int> dp(n + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    int count = nums[0];
    int t = 1;

    for (int i = 1; i < n; i++)
    {
        count = (count * (nums[i] - t)) % MOD;

        if (nums[i] > 1)
            t++;
    }

    if (count == 1)
    {
        cout << 0;
        return;
    }

    cout << count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}