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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int x;
    if (n & 1)
        x = arr[n / 2] * arr[n / 2];
    else
        x = arr[0] * arr[n - 1];

    vector<int> factors;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            factors.push_back(i);
            if (i * i != x)
                factors.push_back(x / i);
        }
    }

    sort(factors.begin(), factors.end());

    if (factors == arr)
        cout << x;
    else
        cout << -1;
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