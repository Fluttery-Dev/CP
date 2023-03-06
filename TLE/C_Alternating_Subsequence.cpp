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
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int m = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] * arr[i - 1] < 0)
        {
            sum += m;
            m = arr[i];
        }
        else
            m = max(m, arr[i]);
    }
    sum += m;

    cout << sum;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}