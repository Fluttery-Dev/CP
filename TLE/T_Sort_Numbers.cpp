#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[3];
    int brr[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        brr[i] = arr[i];
    }

    sort(arr, arr + 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << "\n";
    }
    cout << "\n";

    for (int i = 0; i < 3; i++)
    {
        cout << brr[i] << "\n";
    }
}
