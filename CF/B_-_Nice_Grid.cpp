#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int c, r;
    cin >> c >> r;

    int dist = max(llabs(c - 8), llabs(r - 8));
    if (dist & 1)
        cout << "black";
    else
        cout << "white";
}