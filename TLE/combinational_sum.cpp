#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> solve_it(int candidates[], int n, int target)
{
    vector<vector<int>> ans;
    if (target == 0)
        return {{}};

    if (n == 0)
        return {};

    for (int i = 0; i < n; i++)
    {
        if (target - candidates[i] >= 0)
        {
            vector<vector<int>> temp = solve_it(candidates + i, n - i, target - candidates[i]);

            for (auto y : temp)
            {
                y.push_back(candidates[i]);
                ans.push_back(y);
            }
        }
    }
    return ans;
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{

    sort(candidates.begin(), candidates.end(), greater<int>());

    int arr[candidates.size()];
    for (int i = 0; i < candidates.size(); i++)
    {
        arr[i] = candidates[i];
    }

    return solve_it(arr, candidates.size() - 1, target);
}

void solve()
{
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    sort(arr.begin(), arr.end());

    combinationSum(arr, target);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    solve();
}