#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int k = min(m, n);

    int count = 0;

    for (int b = 0; b <= k; b++)
    {
        if (b * b > m)
            break;
        int n1 = (m - b * b) * (m - b * b);
        if (n1 == n - b)
            count++;
    }
    cout << count;
}