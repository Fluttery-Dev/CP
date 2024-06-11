#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> count(n);

    int l, r;
    for (int i = 0; i < q; i++)
    {
        cin >> l >> r;
        count[l - 1]++;
        if (r < n)
            count[r]--;
    }

    partial_sum(count.begin(), count.end(), count.begin());
    sort(count.begin(), count.end(), greater<int>());
    sort(nums.begin(), nums.end(), greater<int>());

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += count[i] * nums[i];
    }

    cout << sum;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}