#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int binExpo(int a, int b, int m)
{

    if (b == 0)
        return 1;
    if (a == 0)
        return 0;

    int t = binExpo(a, b / 2, m) % m;
    t = (t * t) % m;
    if (b & 1)
        return (t * a) % m;
    return t;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int t = binExpo(b, c, MOD - 1);
    cout << binExpo(a, t, MOD);
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