#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> matrixBlockSum(vector<vector<int>> &mat, int k)
{
    int n = mat.size();
    int m = mat[0].size();

    vector<vector<int>> preq(n + 1, (vector<int>(m + 1)));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            preq[i][j] = preq[i - 1][j] + preq[i][j - 1] - preq[i - 1][j - 1];
            preq[i][j] += mat[i - 1][j - 1];
        }
    }

    vector<vector<int>> ans(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int a = max(0ll, i - k);
            int b = max(0ll, j - k);
            int x = min(n - 1, i + k);
            int y = max(m - 1, j + k);

            ans[i][j] = preq[x][y] - preq[a - 1][y] - preq[x][b - 1] + preq[a - 1][b - 1];
        }
    }
    return ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> m = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 1;
    vector<vector<int>> ans = matrixBlockSum(m, k);
    for (auto x : ans)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}