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
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    vector<int> brr(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    vector<int> preq(n + 1);
    partial_sum(all(arr), (preq.begin() + 1));
    preq[0] = 0;

    int i = 0, j = 0;
    while (j < m)
    {
        if (preq[i + 1] >= brr[j])
        {
            cout << i + 1 << " " << brr[j] - preq[i] << endl;
            j++;
        }
        else
            i++;
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}