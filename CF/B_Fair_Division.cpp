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
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
            count1++;
        else
            count2++;
    }

    if (accumulate(arr, arr + n, 0) & 1)
    {
        cout << "NO";
        return;
    }

    if (count2 & 1 && count1 == 0)
        cout << "NO";
    else
        cout << "YES";
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