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
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    sort(arr, arr + n);
    int i = 1;
    while (i < n)
    {
        if (arr[i] - arr[i - 1] <= d)
        {
            count++;
            i += 2;
        }
        else
            i++;
    }
    cout << count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}