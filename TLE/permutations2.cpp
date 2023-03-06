#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void permute(vector<int> nums, vector<vector<int>> &ans, int n)
{
    if (n == nums.size() - 1)
    {
        ans.push_back(nums);
        return;
    }

    for (int i = n + 1; i < nums.size(); i++)
    {
        if (nums[n] != nums[i])
        {
            swap(nums[n], nums[i]);
            permute(nums, ans, n + 1);
            swap(nums[n], nums[i]);
        }
    }
}

vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> ans;

    permute(nums, ans, 0);
    return ans;
}

void solve()
{
    vector<int> vec(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> vec[i];
    }
    vector<vector<int>> ans = permuteUnique(vec);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << endl;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}