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
    cout.tie(NULL);

    string s;
    cin >> s;
    int count = 1;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++;
        else
            count = 1;

        if (count == 7)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}