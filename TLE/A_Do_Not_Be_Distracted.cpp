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
    string s;
    cin >> s;
    vector<int> occured(26, 0);

    for (int i = 0; i < n; i++)
    {

        if (occured[s[i] - 'A'])
        {
            cout << "NO" << endl;
            return;
        }
        occured[s[i] - 'A']++;

        while (s[i] == s[i + 1] && i < n)
            i++;
    }
    cout << "YES" << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}