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
    int brr[n];
    int m = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m = min(m, arr[i]);
        brr[i] = m;
    }

    cout << accumulate(brr, brr + n, 0ll);
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