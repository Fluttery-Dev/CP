#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int brr[], int n)
{
    int p, q;
    cin >> p >> q;
    p--;
    q--;

    int term = 0;
    if (p > 0)
        term = brr[p - 1];
    cout << brr[q] - term;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int tc;
    cin >> tc;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int brr[n];
    partial_sum(arr, arr + n, brr);

    while (tc--)
    {
        solve(brr, n);
        cout << endl;
    }
}