#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, m, c;
    cin >> n >> m >> c;
    vector<int> arr(n + 1);
    vector<int> brr(m);

    // input the values

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    vector<int> temp(n + 1);

    for (int i = 0; i < m; i++)
    {
        temp[i] += brr[i];
        temp[n - (m - 1 - i)] -= brr[i];
    }

    cout << endl;

    partial_sum(temp.begin(), temp.end(), temp.begin());

    // calculating final values of array

    for (int i = 0; i < n; i++)
    {
        cout << (arr[i] + temp[i]) % c << " ";
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}