#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> ans;
void combination(int arr[], int n, int target, vector<int> temp)
{

    if (target == 0)
    {
        for (auto &x : ans)
        {
            if (x == temp)
                return;
        }
        ans.push_back(temp);
        return;
    }
    if (target < 0)
        return;

    if (n == 0)
        return;

    combination(arr + 1, n - 1, target, temp);
    temp.push_back(arr[0]);
    combination(arr + 1, n - 1, target - arr[0], temp);
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    int n = candidates.size();
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = candidates[i];
    }
    sort(arr, arr + n);
    vector<int> temp;
    combination(arr, n, target, temp);
    return ans;
}

void solve()
{
    vector<int> candidates;
    int target;
    combinationSum2(candidates, target);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    solve();
}