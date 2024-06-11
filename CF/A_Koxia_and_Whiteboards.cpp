#include <bits/stdc++.h>
#define endl "\n";
using namespace std;
#define int long long int

void solve()
{
    int n, m;
    cin >> n >> m;
    priority_queue<int, vector<int>, greater<int>> arr;
    int t;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        arr.push(t);
    }
    int brr[m];

    for (int i = 0; i < m; i++)
    {
        cin >> brr[i];
    }

    for (int i = 0; i < m; i++)
    {
        arr.pop();
        arr.push(brr[i]);
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr.top();
        arr.pop();
    }

    cout << sum;
}

signed main()
{

    ios ::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
        cout << endl;
    }
}