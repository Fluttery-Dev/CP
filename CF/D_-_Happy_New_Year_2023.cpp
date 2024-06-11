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
    int p;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            p = i;
            break;
        }
    }

    int q = sqrt(n / p);
    if (q == sqrt(n / p))
    {
        cout << q << " " << p;
    }
    else
        cout << p << " " << n / (p * p);
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