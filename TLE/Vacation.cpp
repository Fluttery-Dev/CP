#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(vector<vector<int>> preq)
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int count = preq[x][y] - preq[a - 1][y] - preq[x][b - 1] + preq[a - 1][b - 1];

    if (count)
        cout << 0;
    else
        cout << 1;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<vector<int>> preq(n + 1, vector<int>(m + 1));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            preq[i][j] = preq[i - 1][j] + preq[i][j - 1] - preq[i - 1][j - 1];
            if (arr[i - 1][j - 1] == 0)
                preq[i][j]++;
        }
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve(preq);
        cout << endl;
    }
}