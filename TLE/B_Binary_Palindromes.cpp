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
    int countOdd = 0, x = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> str;
        int k = str.size();
        if (k & 1)
        {
            countOdd++;
            continue;
        }
        int count1 = 0, count0 = 0;
        for (int i = 0; i < k; i++)
        {
            if (str[i] - '0' == 0)
                count0++;
        }
        if (count0 & 1)
            x++;
    }

    if (x & 1 && countOdd == 0)
        cout << n - 1;
    else
        cout << n;
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