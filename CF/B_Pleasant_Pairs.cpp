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
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]] = i + 1;
    }

    int count = 0;
    sort(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i] * (arr[i] + 1); j <= 2 * n; j += arr[i])
        {
            if (mp.find(j / arr[i]) != mp.end() && (mp[j / arr[i]] + mp[arr[i]] == j))
                count++;
        }
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