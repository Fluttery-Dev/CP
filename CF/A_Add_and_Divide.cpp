#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int a, b;
    cin >> a >> b;
    int count = 0;

    if (b == 1)
    {
        b++;
        count += 1;
    }
    while (true)
    {
        int c = floor(log(a) / (double)log(b)) + 1;
        int d = floor(log(a) / (double)log(b + 1)) + 1;

        if (c == d)
            break;

        b++;
        count++;
    }
    while (a > 0)
    {
        a /= b;
        count++;
    }
    cout << count;
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