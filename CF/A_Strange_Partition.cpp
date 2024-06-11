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
    double k;
    cin >> k;

    vector<int> nums(n);
    int maxB = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        maxB += ceil(nums[i] / k);
    }
    int minB = ceil(accumulate(nums.begin(), nums.end(), 0ll) / k);

    cout << minB << " " << maxB;
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