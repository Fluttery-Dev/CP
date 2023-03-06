#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int maxSum(int arr[], int n, int k)
{

    if (n < k)
    {
        std::cout << "Invalid";
        return -1;
    }

    int res = 0;
    for (int i = 0; i < k; i++)
        res += arr[i];

    int curr_sum = res;
    for (int i = k; i < n; i++)
    {
        curr_sum += arr[i] - arr[i - k];
        res = max(res, curr_sum);
    }

    return res;
}
void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int arr[n];

    if (x < 0)
    {
        k = n - k;
        x *= -1;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] += x;
    }

    if (k == 0)
    {
        std::cout << 0;
        return;
    }
    int mx = INT_MIN;

    for (int i = 1; i < k + 1; i++)
    {
        mx = max(mx, maxSum(arr, n, i));
    }
    std::cout << mx;
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
        std::cout << endl;
    }
}