#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    int min = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= arr[min])
        {
            min = i;
        }
    }

    int i = distance(arr, max_element(arr, arr + n));

    ans = i + n - min;

    if (i < min)
        ans--;

    cout << ans;
}
