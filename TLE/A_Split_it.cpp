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
    string str;
    cin >> str;

    if (n < 2 * k + 1)
    {
        cout << "NO";
        return;
    }

    for (int i = 0; i < k; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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