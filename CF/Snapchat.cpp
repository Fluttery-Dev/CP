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
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    int ans = 0;
    int max_till_now = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0 || arr2[i] == 0)
        {
            ans = max(max_till_now, ans);
            max_till_now = 0;
        }

        else
            max_till_now++;
    }

    ans = max(max_till_now, ans);

    cout << ans << endl;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}