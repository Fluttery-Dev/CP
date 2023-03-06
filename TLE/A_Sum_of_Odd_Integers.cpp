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

    if (k * k <= n)
    {
        if (((k & 1) && (n & 1)) || (!(k & 1) && !(n & 1)))
        {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
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