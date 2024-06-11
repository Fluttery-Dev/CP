#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[0];

    string possible;
    cin >> possible;

    for (int i = 0; i < n - 1; i++)
    {
        mx = max(mx, arr[i]);

        if (!(possible[i] - '0') && mx > i + 1)
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}