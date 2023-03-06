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
        int n;
        cin >> n;
        int arr[n];
        bool sorted = true;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
                sorted = false;
        }

        if (sorted)
        {
            cout << 0 << endl;
            continue;
        }
        int x = 0;

        sorted = true;

        int diff = INT16_MIN;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                int new_diff = arr[i - 1] - arr[i];
                if (new_diff > diff)
                {
                    diff = new_diff;
                    x = arr[i] + arr[i - 1] + 1;
                }
            }
        }

        x /= 2;

        for (int i = 0; i < n; i++)
        {
            arr[i] = abs(arr[i] - x);
        }

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
                sorted = false;
        }

        if (sorted)
        {
            cout << x << endl;
            continue;
        }
        cout << -1 << endl;
    }
}