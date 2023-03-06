#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int circularSubarraySum(int arr[], int n)
{

    int i = 0, j = 0;
    int sum_till_now = 0;
    int total = accumulate(arr, arr + n, 0);
    int max_sum = INT_MIN;
    int ans = 0;

    while (j < n)
    {
        sum_till_now += arr[j];
        max_sum = max(max_sum, sum_till_now);

        if (sum_till_now < 0)
        {
            sum_till_now = 0;
            i = j + 1;
        }
        j++;
    }

    int max_sum2 = INT_MIN;
    sum_till_now = 0;
    i = 0;
    j = 0;

    for (int i = 0; i < n; i++)
        arr[i] *= -1;

    while (j < n)
    {
        sum_till_now += arr[j];
        max_sum2 = max(max_sum2, sum_till_now);

        if (sum_till_now < 0)
        {
            sum_till_now = 0;
            i = j + 1;
        }
        j++;
    }

    if (abs(total) != max_sum2)
        total += max_sum2;
    ans = max(max_sum, total);
    return ans;

    // your code here
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << circularSubarraySum(arr, n);
}