#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{

    int n, k;
    cin >> n >> k;
    int arr[n * k];
    for (int i = 0; i < k * n; i++)
    {
        cin >> arr[i];
    }

    int t = ceil(n / (double)2) - 1;

    int i = (t)*k;
    int sum = 0;
    for (i; i < n * k; i += n - t)
    {
        sum += arr[i];
    }
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