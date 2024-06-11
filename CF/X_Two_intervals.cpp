#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
using ll = long long;
void solve()
{

    ll l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;

    ll left = max(l1, l2), right = min(r1, r2);
    if (left <= right)
    {
        cout << left << " " << right;
    }
    else
    {
        cout << -1;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}