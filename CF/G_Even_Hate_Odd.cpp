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

        int odd = 0;
        int even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                odd++;
            else
                even++;
        }

        int temp = abs(even - odd);

        if (temp & 1)
            cout << -1 << endl;
        else
        {
            cout << temp / 2 << endl;
        }
    }
}
