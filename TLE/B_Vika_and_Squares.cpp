#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m = *min_element(arr.begin(), arr.end());
    int ans = m * n;

    int i = 0;
    int rep = 2 * n - 1;
    int count = 0, mx = 0;
    while (rep--)
    {
        if (arr[i] == m)
        {
            mx = max(mx, count);
            count = 0;
        }
        else
            count++;
        i++;
        i %= n;
    }

    cout << ans + mx;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}