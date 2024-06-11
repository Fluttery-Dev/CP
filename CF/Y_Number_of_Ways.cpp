#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ways(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;
    return ways(n - 1) + ways(n - 2) + ways(n - 3);
}
void solve()
{
    int s, e;
    cin >> s >> e;
    cout << ways(e - s);
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}