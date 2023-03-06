#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool comp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

void solve()
{
    int n, res;
    cin >> n >> res;

    vector<pair<int, int>> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i].first;
        nums[i].second = i + 1;
    }

    if (n < 3)
    {
        cout << "IMPOSSIBLE";
        return;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        int sum = nums[i].first + nums[j].first + nums[k].first;
        while (k > j)
        {
            if (sum == res)
            {
                cout << nums[i].second << " " << nums[j].second << " " << nums[k].second;
                return;
            }

            if (sum < res && j < k)
            {
                sum -= nums[j].first;
                sum += nums[++j].first;
            }

            else if (sum > res && j < k)
            {
                sum -= nums[k].first;
                sum += nums[--k].first;
            }
        }
    }

    cout << "IMPOSSIBLE";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}