#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool comp(char a, char b) { return a < b; }

string repeat(char s, int n)
{
    string s1 = "";

    for (int i = 0; i < n; i++)
        s1 += s; // Concatenating strings

    return s1;
}

void solve()
{
    string str;
    cin >> str;

    map<char, int> cnt;
    for (int i = 0; i < str.size(); i++)
    {
        if (cnt.find(str[i]) == cnt.end())
            cnt[str[i]] = 1;
        else
            cnt[str[i]]++;
    }
    string s = "";
    string t = "";
    bool skip = false;
    for (auto x : cnt)
    {
        if (skip)
        {
            s += repeat(x.first, x.second);
            continue;
        }
        s += repeat(x.first, x.second / 2.0);
        t += repeat(x.first, ceil(x.second / 2.0));
        if (x.second & 1)
        {
            skip = true;
        }
    }
    reverse(t.begin(), t.end());
    s = s + t;
    cout << s;
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