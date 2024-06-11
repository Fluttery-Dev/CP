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
    for (; i < n - 1; i++)
    {
        if (str[i] > str[i + 1])
            break;
    }
    if (i != n)
        str.erase(str.begin() + i);
    cout << str;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}