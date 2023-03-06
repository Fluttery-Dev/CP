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
    int arr[n];
    int brr[m];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    int gcd;
    if (n == 1)
        gcd = arr[0];
    else
        gcd = arr[1] - arr[0];

    for (int i = 1; i < n; i++)
    {
        gcd = __gcd(gcd, arr[i] - arr[0]);
    }

    for (int i = 0; i < m; i++)
    {
        if (n == 1)
            cout << arr[0] + brr[i] << " ";
        else
            cout << __gcd(arr[0] + brr[i], gcd) << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}