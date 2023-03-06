#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) x.begin(), x.end()
#define ones __builtin_popcount
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int fact(int n)
{
    if (n == 1)
        return 1;

    int fact = 1;
    for (int k = 1; k < n; k++)
        fact *= k;
    return fact + 1;
}

void solve()
{
    string str;
    cin >> str;
    int count = 0;

    int arr[2] = {-1, -1};

    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i] - '0';

        if (n == 1 || n == 0)
            arr[n ^ (i & 1)] = i;
        int mn = min(arr[0], arr[1]);
        count += (i - mn);
    }

    cout << count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << endl;
    }
}
