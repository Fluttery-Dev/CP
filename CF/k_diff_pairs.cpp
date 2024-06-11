#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());

    int i = 0, j = 0;
    int n = nums.size();
    unordered_map<int, int> mp;
    while (j < n)
    {
        int diff = abs(nums[j] - nums[i]);

        if (diff == k)
            mp[nums[i]] = nums[j];
        else if (diff < k)
            j++;
        else
            i++;
        if (i == j)
            j++;
    }
    return mp.size();
}

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr = {3, 1, 4, 1, 5};
    cout << findPairs(arr, 2);
}