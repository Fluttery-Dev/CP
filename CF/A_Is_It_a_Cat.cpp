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
    if (n < 4)
    {
        cout << "NO";
        return;
    }

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int i = 0;

    if (str[i] != 'm')
    {
        cout << "NO";
        return;
    }
    while (str[i] == 'm')
        i++;
    if (str[i] != 'e')
    {
        cout << "NO";
        return;
    }
    while (str[i] == 'e')
        i++;

    if (str[i] != 'o')
    {
        cout << "NO";
        return;
    }
    while (str[i] == 'o')
        i++;
    if (str[i] != 'w')
    {
        cout << "NO";
        return;
    }
    while (str[i] == 'w')
        i++;

    if (i < n)
        cout << "NO";

    else
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