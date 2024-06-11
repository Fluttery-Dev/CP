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
    int sum_till_now = 0ll;
    bool flag = true;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        sum_till_now += t;
        int req = (i) * (i + 1) / 2;

        if (sum_till_now < req)
            flag = false;
    }
    cout << (flag ? "YES" : "NO");
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