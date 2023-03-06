#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    string s1 = "";
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            cout << "NO";
            return 0;
        }
    }

    if (s[0] == '4')
    {
        cout << "NO";
        return 0;
    }

    int count = 0;
    int m;

    for (int i = 0; i < n; i++)
    {
        count++;
        m = max(count, m);
        if (s[i] == '1')
            count = 0;
    }

    if (m <= 2)
        cout << "YES";
    else
        cout << "NO";
}