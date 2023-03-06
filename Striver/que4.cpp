#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void permute(vector<int> arr, int i)
{

    if (i == arr.size())
    {
        for (int j = 0; j < arr.size(); j++)
        {
            cout << arr[j] << " ";
        }

        cout << endl;
    }
    permute(arr, i + 1);

    for (int j = i + 1; j < arr.size(); j++)
    {
        if (arr[j] != arr[i])
        {
            swap(arr[i], arr[j]);
            permute(arr, i + 1);
            swap(arr[i], arr[j]);
        }
    }
}

signed main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    permute(arr, 0);
}