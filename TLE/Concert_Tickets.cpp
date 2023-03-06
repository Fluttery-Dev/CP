#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> people(m);
    multiset<int> price;
    int t;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        price.insert(t);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> people[i];
    }

    for (int i = 0; i < m; i++)
    {

        auto it = price.upper_bound(people[i]);
        if (it == price.begin() || price.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *(--it) << endl;
            price.erase(it);
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}