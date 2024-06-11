#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int tc;
    cin >> tc;
    vector<int> arr(200002);
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        arr[a]++;
        arr[b + 1]--;
    }

    partial_sum(arr.begin(), arr.end(), arr.begin());

    vector<int> greaterK(200002);

    for (int i = 1; i < 200002; i++)
    {
        greaterK[i] = greaterK[i - 1];
        if (arr[i] >= k)
            greaterK[i]++;
    }

    while (tc--)
    {
        int x, y;
        cin >> x >> y;
        cout << greaterK[y] - greaterK[x - 1] << endl;
    }
}