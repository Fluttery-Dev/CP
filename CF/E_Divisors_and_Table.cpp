#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, d1, d2;
    cin >> n >> d1 >> d2;

    vector<int> div1;

    for (int i = 1; i * i <= d1; i++)
    {
        if (d1 % i == 0)
        {
            div1.push_back(i);
            div1.push_back(d1 / i);
        }
    }

    sort(div1.begin(), div1.end());

    vector<int> div2;

    for (int i = 1; i * i <= d1; i++)
    {
        if (d2 % i == 0)
        {
            div2.push_back(i);
            div2.push_back(d2 / i);
        }
    }

    sort(div2.begin(), div2.end());
    int t = 1;
    int x = 0, y = 0;
    int i = 0, j = 0;
    int f = 0;

    while (t <= n * n && (i < div1.size() || j < div2.size()))
    {
        if (i < div1.size() && div1[i] * t <= n * n)
        {
            t *= div1[i];
            f ^= (int)ceil(t / (double)n);
            i++;
        }
        if (j < div2.size() && div2[j] * t <= n * n)
        {
            t *= div2[j];
            j++;
            f ^= (int)ceil(t / (double)n);
        }
    }

    int s = (x + 1) * (y + 1);

    cout << s << " " << f;
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