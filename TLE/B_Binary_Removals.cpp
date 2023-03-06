#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    string str;
    cin >> str;
    int i;
    int n = str.size();

    for (i = 0; i < n; i++)
    {
        int count = 0;
        while (str[i] == '1')
        {
            count++;
            i++;
        }
        if (count >= 2)
            break;
    }

    while (i < n)
    {
        int count = 0;
        while (str[i] == '0')
        {
            count++;
            i++;
        }

        if (count >= 2)
        {
            cout << "NO";
            return;
        }
        i++;
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