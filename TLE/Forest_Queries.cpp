#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int tc;
    cin >> tc;

    char forest[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> forest[i][j];
        }
    }

    vector<vector<int>> preq(n + 1, vector<int>(n + 1, 0));

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            preq[i][j] = preq[i - 1][j] + preq[i][j - 1] - preq[i - 1][j - 1];
            if (forest[i][j] == '*')
                preq[i][j] += 1;
        }
    }

    while (tc--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        cout << preq[x][y] - preq[x][b - 1] - preq[a - 1][y] + preq[a - 1][b - 1];
        cout << endl;
    }
}