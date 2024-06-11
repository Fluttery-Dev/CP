#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool palindrome(string str)
{
    int n = str.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - 1 - i])
            return false;
    }
    return true;
}

bool possible(string str, int count)
{

    if (count == 0)
    {
        int k = 5;
        bool p = false;
        for (int i = 0; i < str.size() - 4; i++)
        {
            p = p || palindrome(str.substr(i, 5));
        }
        bool p2 = false;
        for (int i = 0; i < str.size() - 5; i++)
        {
            p2 = p2 || palindrome(str.substr(i, 6));
        }

        return !(p || p2);
    }

    int i = 0;
    while (str[i] != '?')
        i++;
    str[i] = '1';
    bool a = possible(str, count - 1);
    str[i] = '0';
    bool b = possible(str, count - 1);
    return a || b;
}

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '?')
            count++;
    }

    if (possible(str, count))
        cout << "POSSIBLE";
    else
        cout << "IMPOSSIBLE";
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    int count = 1;
    while (tc--)
    {
        cout << "Case #" << count++ << ": ";
        solve();
        cout << endl;
    }
}