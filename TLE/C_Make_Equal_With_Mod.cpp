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
    bool case0 = true;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] == 1)
            case0 = false;
    }

    if (case0)
    {
        cout << "YES";
        return;
    }

    bool cons = false;
    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == 1)
        {
            cons = true;
            break;
        }
    }

    if (!cons)
        cout << "YES";
    else
        cout << "NO";
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