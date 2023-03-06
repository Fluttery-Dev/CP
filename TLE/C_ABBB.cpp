#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    string str;
    cin >> str;
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A')
            count++;

        else
        {
            if (count == 0)
                count++;
            else
                count--;
        }
    }

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