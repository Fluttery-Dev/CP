#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{

    int arr[4];
    int m1, m2;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    m1 = max(arr[0], arr[1]);
    m2 = max(arr[2], arr[3]);

    sort(arr, arr + 4);
    if (min(m1, m2) == arr[2])
        cout << "YES";
    else
        cout << "NO";
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
        cout << endl;
    }
}