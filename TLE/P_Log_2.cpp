#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int log2(int n)
{
    if (n == 1)
        return 0;
    return 1 + log2(n / 2);
}

void solve()
{
    int n;
    cin >> n;
    cout << log2(n);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}