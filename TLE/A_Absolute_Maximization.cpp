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
        vector<int> arr(n);

        for (auto &x : arr)
        {
            cin >> x;
        }

        int max = arr[0];
        int min = arr[0];

        for (int i = 0; i < n; i++)
        {
            max |= arr[i];
            min &= arr[i];
        }

        cout << max - min << endl;
    }
}
