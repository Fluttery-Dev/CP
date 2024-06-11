#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, m;
    cin >> n >> m;

    int countN[5]{};
    int countM[5]{};

    for (int i = 0; i < 5; i++)
    {
        countN[i] = n / 5;

        countM[i] = m / 5;

        if (i != 0)
        {
            if (n % 5 >= i)
                countN[i]++;
            if (m % 5 >= i)
                countM[i]++;
        }
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int t = (5 - i) % 5;
        count += countM[t] * countN[i];
    }

    cout << count;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}