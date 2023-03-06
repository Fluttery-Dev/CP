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
    vector<int> arr(n);
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
        }
        else
        {
            pq.push(arr[i]);
        }
    }

    cout << ans;
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