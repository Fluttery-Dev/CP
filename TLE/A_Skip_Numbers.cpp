#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{

    int n, k;
    cin >> k >> n;

    if (n % 3 == 0)
    {
        cout << -1;
        return;
    }

    cout << n - (n / 3);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}