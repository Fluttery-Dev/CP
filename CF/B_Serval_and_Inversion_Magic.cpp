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
    cin >> str;

    int flip = 0;

    for (int i = 0; i < n / 2; i++)
    {
        int t = str[i] - '0';
        if (flip == 1)
        {
            t = !t;
        }

        if (t != (str[n - i - 1] - '0'))
        {
            if (flip > 1)
            {
                cout << "No";
                return;
            }
            else
                flip++;
        }
    }

    cout << "Yes";
    return;
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