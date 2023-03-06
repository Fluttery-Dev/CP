#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans(int n)
{
    if (n < 2)
        return 0;

    int t = sqrt(24 * n + 1);
    t -= 1;
    t /= 6;
    int sides = 3 * t * (t + 1) / 2 - t;
    return 1 + ans(n - sides);
}
void solve()
{
    int n;
    cin >> n;
    cout << ans(n);
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