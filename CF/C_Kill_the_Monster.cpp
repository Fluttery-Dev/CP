#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int hc, hm, dc, dm;
    cin >> hc >> dc;
    cin >> hm >> dm;

    int k, w, a;
    cin >> k >> w >> a;

    for (int i = 0; i <= k; i++)
    {
        int x = ceil((hc + i * a) / (double)dm);
        int y = ceil(hm / (double)(dc + (k - i) * w));
        if (x >= y)
        {
            cout << "YES";
            return;
        }
    }

    cout << "NO";
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