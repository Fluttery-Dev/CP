#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans(int arr[], int sum1, int sum2, int n)
{
    if (n == 0)
        return abs(sum1 - sum2);

    int diff1 = ans(arr + 1, sum1 + arr[0], sum2, n - 1);
    int diff2 = ans(arr + 1, sum1, sum2 + arr[0], n - 1);

    return min(diff1, diff2);
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << ans(arr, 0ll, 0ll, n);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}