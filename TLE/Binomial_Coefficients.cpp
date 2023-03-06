#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// TODO precompute fact of numbers % MOD upto 1e6
#define x 1000001

int fact[x];
int modFact[x];

int binExpo(int n, int m)
{

    if (m == 0)
        return 1;
    if (n == 0)
        return 0;

    int t = binExpo(n, m / 2) % MOD;
    t = (t * t) % MOD;

    if (m & 1)
        return (t * n) % MOD;
    return t;
}

void compFact()
{
    fact[0] = fact[1] = 1;
    for (int i = 2; i < x; i++)
    {
        fact[i] = (i * fact[i - 1]) % MOD;
    }

    modFact[x - 1] = binExpo(fact[x - 1], MOD - 2);

    for (int i = x - 2; i >= 0; i--)
    {
        modFact[i] = (modFact[i + 1] * (i + 1)) % MOD;
    }
}

void solve()
{
    int n, r;
    cin >> n >> r;

    if (r > n)
    {
        cout << 0;
        return;
    }

    cout << (((fact[n] * modFact[r]) % MOD) * modFact[n - r]) % MOD;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    compFact();
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}