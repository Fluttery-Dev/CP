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

    int t;

    cin >> t;
    int lc = t;

    for (int i = 1; i < n; i++)
    {
        cin >> t;
        int l = __gcd(t, lc);
        int m = lc * t;
        lc = m / l;
    }

    vector<int> fact;
    int count = 0;

    for (int i = 2; i * i <= lc; i++)
    {
        if (lc % i == 0)
        {
            fact.push_back(i);
        }
        while (lc % i == 0)
            lc /= i;
    }

    if (lc != 1)
        fact.push_back(lc);

    for (int i = 1; i <= k; i++)
    {
        bool flag = false;
        for (int j = 0; j < fact.size() && fact[j] <= i; j++)
        {
            if (i % fact[j] == 0)
                flag = true;
        }
        if (!flag)
            cout << i << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}