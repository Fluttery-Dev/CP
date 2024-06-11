#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans(vector<vector<bool>> temp, int n)
{
    if (n == 8)
    {
        return 1;
    }

    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        vector<vector<bool>> arr = temp;
        if (arr[n][i] == true)
        {
            int j = 1;
            for (int k = n + 1; k < 8; k++)
            {
                arr[k][i] = false;
                if (i - j >= 0)
                    arr[k][i - j] = false;
                if (i + j < 8)
                    arr[k][i + j] = false;
                j++;
            }
            count += ans(arr, n + 1);
        }
    }
    return count;
}

void solve()
{
    vector<vector<bool>> arr(8, vector<bool>(8, true));
    char t;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> t;
            if (t == '.')
                arr[i][j] = true;
            else
                arr[i][j] = false;
        }
    }

    cout << ans(arr, 0);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}