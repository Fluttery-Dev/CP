#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int calc(int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans *= n % 10;
        n /= 10;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;

    int p = 1;
    int ans = calc(n);

    while (n > 0)
    {
        ans = max(ans, calc(n - 1) * p);
        p *= 9;
        n /= 10;
    }

    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}