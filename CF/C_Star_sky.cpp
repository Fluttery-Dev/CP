#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, q, c;
    cin >> n >> q >> c;
    int x, y, brightness;
    int t, a, b;
    vector<vector<vector<int>>> preq(101, vector<vector<int>>(101, vector<int>(c + 1)));

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> brightness;
        preq[x][y][brightness]++;
    }

    for (int i = 1; i < 101; i++)
    {
        for (int j = 1; j < 101; j++)
        {
            for (int k = 0; k < c + 1; k++)
            {
                preq[i][j][k] += preq[i - 1][j][k] + preq[i][j - 1][k] - preq[i - 1][j - 1][k];
            }
        }
    }

    for (int i = 0; i < q; i++)
    {
        int sum = 0;
        cin >> t >> a >> b >> x >> y;
        for (int j = 0; j < c + 1; j++)
        {
            int count = preq[x][y][j] - preq[a - 1][y][j] - preq[x][b - 1][j] + preq[a - 1][b - 1][j];
            int bright = (j + t) % (c + 1);
            bright *= count;
            sum += bright;
        }
        cout << sum << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}