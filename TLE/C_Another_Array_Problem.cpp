#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (auto &x : nums)
    {
        cin >> x;
    }

    vector<int> sum(n);

    partial_sum(nums.begin(), nums.end(), sum.begin());

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            int base = abs(nums[j] - nums[i]);
            int sub;
            if (i == 0)
                sub = 0;
            else
                sub = sum[i - 1];

            if (sum[j] - sub < (j - i + 1) * base)
            {
                for (int k = i; k <= j; k++)
                {
                    nums[k] = base;
                }
                partial_sum(nums.begin(), nums.end(), sum.begin());
            }
        }
    }

    cout << sum[n - 1] << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}