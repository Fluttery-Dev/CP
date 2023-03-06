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
    string str;
    cin >> str;
    bool L = false, R = false;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'L')
            L = true;

        else
            R = true;
    }

    if (!(L && R))
    {
        cout << -1;
        return;
    }

    int i = str.find('R');
    int j = str.substr(i + 1, n - i).find('L');

    if (j == string::npos)
    {

        cout << i - str.substr(0, i).find_last_of('L');
    }
    else
        cout << 0;
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