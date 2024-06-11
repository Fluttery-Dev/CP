#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int dist(int n, int x)
{
    return min(x, n - x);
}

void solve()
{
    int n;
    cin >> n;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = 0;

    ans += max(dist(n, x1), dist(n, y1));
    int a = max(dist(n, x2), dist(n, n - y2));
    int b = max(dist(n, n - x2), dist(n, y2));
    ans += min(a, b);
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}