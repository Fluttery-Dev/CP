#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n;
    cin >> n;
    vector<int> vec;
    vec.push_back(LLONG_MAX);
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;

        auto it = upper_bound(vec.begin(), vec.end(), t);

        if (it != vec.end())
        {
            vec[it - vec.begin()] = t;
        }
        else
            vec.push_back(t);
    }

    cout << vec.size();
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}