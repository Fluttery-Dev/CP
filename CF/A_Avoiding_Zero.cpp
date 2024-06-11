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

    int sum = accumulate(arr, arr + n, 0ll);

    if (sum == 0)
    {
        cout << "NO";
        return;
    }

    sort(arr, arr + n);

    cout << "YES" << endl;

    for (int i = 0; i < n; i++)
    {
        if (sum > 0)
            cout << arr[n - 1 - i] << " ";
        else
            cout << arr[i] << " ";
    }
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