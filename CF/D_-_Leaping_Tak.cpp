#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 998244353;
const int INF = LLONG_MAX >> 1;

vector<int> mp(200001, -1);
vector<int> preq(200001, -1);

void findCount(vector<pair<int, int>> nums, int n)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (n - nums[i].first > 0)
        {
            if (preq[n - nums[i].first] != -1)
                findCount(nums, n - nums[i].first);

            count += preq[n - nums[i].first];
        }

        if (n - nums[i].second > 0)
            count -= preq[n - nums[i].second - 1];
    }

    mp[n] = count;
    preq[n] = preq[n - 1] + mp[n];
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> nums(q);
    mp[1] = 1;
    preq[1] = 1;
    int x, y;
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        nums[i].first = x;
        nums[i].second = y;
    }

    findCount(nums, n);
    cout << mp[n];
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}