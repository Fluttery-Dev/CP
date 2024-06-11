#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(vector<int> &arr)
{
    int p, q, k;
    cin >> p >> q >> k;

    arr[p - 1] += k;
    if (q < arr.size())
        arr[q] -= k;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc, n;
    cin >> n;
    cin >> tc;

    vector<int> arr(n, 0);
    vector<int> brr(n);

    while (tc--)
    {
        solve(arr);
    }

    partial_sum(arr.begin(), arr.end(), brr.begin());

    cout << *max_element(brr.begin(), brr.end());
}