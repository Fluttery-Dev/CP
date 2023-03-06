#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

string LCSubStr(string X, string Y)
{

    int m = X.length();
    int n = Y.length();

    int result = 0;

    int end;

    int len[2][n + 1];

    int currRow = 0;

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
            {
                len[currRow][j] = 0;
            }
            else if (X[i - 1] == Y[j - 1])
            {
                len[currRow][j] = len[1 - currRow][j - 1] + 1;
                if (len[currRow][j] > result)
                {
                    result = len[currRow][j];
                    end = i - 1;
                }
            }
            else
            {
                len[currRow][j] = 0;
            }
        }

        currRow = 1 - currRow;
    }

    if (result == 0)
    {
        return "-1";
    }

    return X.substr(end - result + 1, result);
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;

    string s = LCSubStr(s1, s2);

    if (s1[0] == s2[0])
    {
        cout << "YES" << endl;
        cout << s1[0] << "*";
        return;
    }
    if (s1[s1.size() - 1] == s2[s2.size() - 1])
    {
        cout << "YES" << endl;
        cout << "*" << s1[s1.size() - 1];
        return;
    }
    if (s.size() >= 2 && s != "-1")
    {
        cout << "YES" << endl;
        cout << "*" + s + "*";
        return;
    }
    cout << "NO";
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