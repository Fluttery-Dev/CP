#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end()
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(all(arr));

    auto start = arr.begin(), end = arr.end() - 1;
    int count = 0;

    while (2 * (*start) < *end)
    {
        auto it1 = --upper_bound(all(arr), 2 * (*start));
        auto it2 = lower_bound(all(arr), ceil((*end) / 2.0));

        if (it2 - start >= end - it1)
            end--;
        else
            start++;
        count++;
    }
    cout << count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}