#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    int factor = 4;
    for (int i = 1; i < n; i++)
    {
        if (n % (factor - 1) == 0)
        {
            cout << n / (factor - 1) << endl;
            return;
        }
        factor *= 2;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}