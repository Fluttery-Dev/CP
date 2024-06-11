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
    int n;
    cin >> n;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;

        if (t == 1)
        {
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";
}