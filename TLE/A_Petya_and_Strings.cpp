#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin >> s1 >> s2;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    int t;
    for (int i = 0; i < s1.size(); i++)
    {
        t = s1[i] - s2[i];
        if (t > 0)
        {
            cout << 1;
            return 0;
        }

        if (t < 0)
        {
            cout << -1;
            return 0;
        }
    }

    cout << 0;
}