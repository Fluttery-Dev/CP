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
    int n;
    cin >> n;
    unordered_map<int, int> mp = {{0, 0}, {1, 0}, {2, 0}};
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        mp[t]++;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < mp[i]; j++)
        {
            cout << i << " ";
        }
    }
}