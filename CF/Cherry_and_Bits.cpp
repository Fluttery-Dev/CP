#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    vector<vector<int>> preq(n + 1, vector<int>(m + 1));

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] = str[j] - '0';
        }
    }

    int q;
    cin >> q;
    int a, b, x, y;

    for (int i = 0; i < q; i++)
    {
        cin >> a >> b >> x >> y;
        preq[a - 1][b - 1]++;
        preq[x][b - 1]--;
        preq[a - 1][y]--;
        preq[x][y]++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            preq[i][j] += preq[i][j - 1];
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            preq[i][j] += preq[i - 1][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] += preq[i][j];
            cout << matrix[i][j] % 2;
        }
        cout << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}