#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    int count = arr[0];
    int x = arr[0], y = arr[0];

    // while (x >= 0 && y >= 0)
    // {
    //     if (arr[1] > 0)
    //     {
    //         x += 1;
    //         y -= 1;
    //         arr[1]--;
    //         count++;
    //     }

    //     if (x < 0 || y < 0)
    //         break;

    //     if (arr[2] > 0)
    //     {
    //         y += 1;
    //         x -= 1;
    //         arr[2]--;
    //         count++;
    //     }

    //     if (arr[2] <= 0 && arr[1] <= 0)
    //         break;
    // }

    if (arr[0] > 0)
    {
        int k = min(arr[1], arr[2]);
        count += 2 * k;
        arr[1] -= k;
        arr[2] -= k;
    }

    if (arr[1] > 0)
    {
        int t = min(arr[1], y);
        count += t;
        x += t;
        y -= t;
    }

    if (arr[2] > 0)
    {
        int t = min(arr[2], x);
        count += t;
        y += t;
        x -= t;
    }

    if (x > 0 && y > 0)
    {
        int t = min(arr[3], min(x, y));
        count += t;
        x -= t;
        y -= t;
        arr[3] -= t;
    }

    if ((arr[3] || arr[2] || arr[1]) && (x >= 0 && y >= 0))
        count++;

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