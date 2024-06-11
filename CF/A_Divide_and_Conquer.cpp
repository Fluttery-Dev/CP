#include <bits/stdc++.h>
using namespace std;

int check(int n)
{
    int ans = 0;
    bool curr = n & 1;
    bool final = !curr;

    while (curr != final)
    {
        n /= 2;
        ans++;
        curr = n & 1;
    }

    return ans;
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
        int n;
        cin >> n;

        int arr[n];
        int odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] & 1)
                odd++;
        }

        int ans = INT32_MAX;

        if (odd & 1)
        {
            for (int i = 0; i < n; i++)
            {

                int t = check(arr[i]);
                ans = min(t, ans);
            }

            cout << ans << "\n";
        }
        else
            cout << 0 << "\n";
    }
}