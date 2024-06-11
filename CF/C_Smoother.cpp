#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int t, count = 0;

    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] >= nums[i + 1])
        {
            int t = nums[i] - nums[i + 1] + 1;
            count += t;
            nums[i] -= t;

            if (t > k)
            {
                cout << "No";
                return;
            }
        }
    }

    if (count > m)
    {
        cout << "No";
        return;
    }

    cout << "Yes";
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