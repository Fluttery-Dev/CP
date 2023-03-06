#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int expo(int a, int b)
{

    if (a == 0 && b == 0)
        return 1;

    if (b == 0)
        return 1;

    int t = expo(a, b / 2) % MOD;
    t = (t * t) % MOD;

    if (b & 1)
        return (a * t) % MOD;
    return t;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << expo(a, b);
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