#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, z;
    cin >> n >> z;
    priority_queue<int> pq;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        pq.push(t);
    }

    int count = 0ll;

    while (z > 0)
    {
        int p = pq.top();
        cout << p << endl;
        if (p == 0)
        {
            cout << "Evacuate";
            return;
        }
        z -= p;
        pq.pop();
        pq.push(z / 2);
        count++;
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