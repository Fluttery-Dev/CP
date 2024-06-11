#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<long long> nums(n);
        for (auto &x : nums)
        {
            cin >> x;
        }

        int m, f = x;

        sort(nums.begin(), nums.end());
        int ptr;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= f)
            {
                f++;
                m = f;
                ptr = i;
            }
            else
                f--;
        }

        if (f <= x && m < y)
        {
            cout << -1 << endl;
            continue;
        }
        f -= x;
        int count = 0;

        if (m > y)
        {
            cout << y - x << endl;
            continue;
        }

        while (x + m < y)
        {
            x += f;
            count += n;
        }

        count += (y - x);

        cout << count << endl;
    }
}
