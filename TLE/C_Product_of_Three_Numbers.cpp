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

    vector<int> ans;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            n /= i;
        }
    }

    ans.push_back(n);

    int prod = 1;
    for (; ans.size() > 2;)
    {
        prod *= ans[ans.size() - 1];
        ans.pop_back();
    }
    if (prod != 1)
        ans.push_back(prod);

    unordered_set<int> s;
    for (int i = 0; i < 3 && i < ans.size(); i++)
    {
        s.insert(ans[i]);
    }

    if (s.size() == 3)
    {
        cout << "YES" << endl;
        for (auto x : s)
        {
            cout << x << " ";
        }
    }
    else
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