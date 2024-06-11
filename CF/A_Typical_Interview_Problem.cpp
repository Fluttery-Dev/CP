#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int i = 0;

    while (i < n)
    {
        int count = 0;
        while (i < n && str[i] == 'F')
        {
            count++;
            i++;
        }
        if (count >= 3)
        {
            cout << "NO";
            return;
        }
        count = 0;
        while (i < n && str[i] == 'B')
        {
            count++;
            i++;
        }
        if (count >= 2)
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