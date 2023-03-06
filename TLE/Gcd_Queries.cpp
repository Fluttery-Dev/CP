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

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> preq(n);
    vector<int> Rpreq(n);

    preq[0] = nums[0];
    Rpreq[n - 1] = nums[n - 1];

    for (int i = 1; i < n; i++)
    {
        preq[i] = __gcd(preq[i - 1], nums[i]);
        Rpreq[n - i - 1] = __gcd(nums[n - i - 1], Rpreq[n - i]);
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int ans;
        if (l > 1 && r < n)
            ans = __gcd(preq[l - 2], Rpreq[r]);
        else if (l == 1 && r < n)
            ans = Rpreq[r];
        else if (l > 1 && r == n)
            ans = preq[l - 2];

        cout << ans << endl;
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