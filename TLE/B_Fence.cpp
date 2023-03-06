#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int min_sum = 0;
    int in = 1;
    int i = 0;
    for (i = 0; i < k; i++)
    {
        sum += arr[i];
    }

    min_sum = sum;
    while (i < n)
    {
        sum += arr[i];
        sum -= arr[i - k];
        if (sum < min_sum)
        {
            min_sum = sum;
            in = i - k + 2;
        }
        i++;
    }

    cout << in;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}