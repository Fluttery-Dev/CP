#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long

void printSub(int arr[], int n, vector<int> ans)
{

    if (n == 0)
    {
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }

    printSub(arr + 1, n - 1, ans);
    ans.push_back(arr[0]);
    printSub(arr + 1, n - 1, ans);
}

signed main()
{
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> ans;
    printSub(arr, n, ans);
}