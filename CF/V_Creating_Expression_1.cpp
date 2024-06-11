#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool possible(int arr[], int n, int x)
{
    if (n == 0)
    {
        if (x == 0)
            return true;
        return false;
    }

    return possible(arr + 1, n - 1, x - arr[0]) || possible(arr + 1, n - 1, x + arr[0]);
}
void solve()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    x -= arr[0];
    if (possible(arr + 1, n - 1, x))
        cout << "YES";
    else
        cout << "NO";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}