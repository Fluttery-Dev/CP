#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second < b.second;
}
void solve()
{

    int n;
    cin >> n;
    int arr[n], brr[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
        brr[i] = t;
    }
    sort(brr, brr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != brr[1])
            cout << i + 1;
    }
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