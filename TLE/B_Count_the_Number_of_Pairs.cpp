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
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;

    vector<int> countSmall(26);
    vector<int> countBig(26);

    for (int i = 0; i < n; i++)
    {
        if (str[i] >= 'a')
            countSmall[str[i] - 'a']++;
        else
            countBig[str[i] - 'A']++;
    }

    int count = 0;
    int req = 0;
    for (int i = 0; i < 26; i++)
    {
        count += min(countBig[i], countSmall[i]);
        req += abs((countBig[i] - countSmall[i]) / 2);
    }

    count += min(req, k);

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