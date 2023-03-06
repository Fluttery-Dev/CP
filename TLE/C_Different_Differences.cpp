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
        int k, n;
        cin >> k >> n;

        vector<int> nums(k);

        int diff = 1;
        int term = 1;

        for (int i = 0; i < k; i++)
        {
            nums[i] = term;
            term += 1;
        }

        int m = n - nums[k - 1];

        int i = 2;
        while (diff < m && i < k)
        {
            diff += 1;
            nums[i++] += diff;
        }

        for (int j = i; j < k; j++)
        {
            nums[j] += m;
        }

        for (i = 0; i < k; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
}
