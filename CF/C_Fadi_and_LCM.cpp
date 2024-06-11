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

    if (n == 1)
    {
        cout << 1 << " " << 1;
        return;
    }

    vector<int> factors;

    for (int i = 1; i * i < n; i++)
    {
        if (n % i == 0)
            factors.push_back(i);
    }

    for (int i = factors.size() - 1; i >= 0; i--)
    {
        int x = factors[i];
        if (n / __gcd(x, n / x) == n)
        {
            cout << x << " " << n / x;
            return;
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}