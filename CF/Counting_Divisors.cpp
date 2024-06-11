#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int t = 1e6;
int mp[t + 1];

void solve()
{
    int n;
    cin >> n;
    int ans = 1;
    while (n != 1)
    {

        int p = mp[n];
        int x = 0;
        while (n % p == 0)
        {
            x++;
            n /= p;
        }
        ans *= (x + 1);
    }
    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 2; i < t + 1; i++)
    {
        if (mp[i] == 0)
        {
            for (int j = i; j < t + 1; j += i)
            {
                mp[j] = i;
            }
        }
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}