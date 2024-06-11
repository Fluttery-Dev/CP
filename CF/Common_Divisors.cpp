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
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        m = max(m, arr[i]);
    }

    vector<int> freq(m + 1, 0);

    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    for (int i = m; i > 0; i--)
    {
        int count = 0;
        for (int j = i; j <= m; j += i)
        {
            if (freq[j] >= 2)
            {
                cout << j;
                return;
            }

            if (freq[j] == 1)
                count++;
            if (count == 2)
            {
                cout << i;
                return;
            }
        }
    }
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}