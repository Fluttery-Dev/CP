// TODO:find forward and reverse gcd
// TODO: for each element check gcd(preq[i-1],Rpreq[i+1]
// TODO: store max result of what done in step 2

#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
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
        preq[i] = __gcd(nums[i], preq[i - 1]);
        Rpreq[n - i - 1] = __gcd(nums[n - i - 1], Rpreq[n - i]);
    }

    int ans = INT_MIN;

    for (int i = 1; i < n - 1; i++)
        ans = max(ans, __gcd(preq[i - 1], Rpreq[i + 1]));

    ans = max(ans, preq[n - 2]);
    ans = max(ans, Rpreq[1]);

    cout << ans;
}