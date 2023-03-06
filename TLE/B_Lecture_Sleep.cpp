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
    int n, k;
    cin >> n >> k;
    vector<int> awake(n);
    vector<int> theorems(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> theorems[i];
    }

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if (t == 0)
            awake[i] = theorems[i];
        else
        {
            awake[i] = 0;
            sum += theorems[i];
        }
    }

    int i = 0;
    int j = k;
    sum += accumulate(awake.begin(), awake.begin() + k, 0ll);
    int ans = sum;
    while (j < n)
    {
        sum += awake[j];
        sum -= awake[i];
        i++;
        j++;
        //    cout << i << " " << j << " " << sum << endl;
        ans = max(ans, sum);
    }

    cout << ans;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}