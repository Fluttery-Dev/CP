#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int arr[])
{
    int x, y;
    cin >> x >> y;

    if (x == 1)
        cout << arr[y - 1];
    else
        cout << (arr[y - 1] ^ arr[x - 2]);
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
    int xorArr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            xorArr[i] = arr[i];
        else
            xorArr[i] = xorArr[i - 1] ^ arr[i];
    }

    while (tc--)
    {
        solve(xorArr);
        cout << endl;
    }
}